/**
 * @file main.cpp
 * @author Renato Sousa and Rodrigo Caus
 * @brief 
 * @version 0.1
 * @date 2020-07-09
 * 
 */
#include <stdio.h>
#include "net/robocup_ssl_client.h"
#include "net/vss_client.h"
#include "util/timer.h"

#include "pb/command.pb.h"
#include "pb/common.pb.h"
#include "pb/packet.pb.h"
#include "pb/replacement.pb.h"

void printRobotInfo(const fira_message::Robot &robot)
{

    printf("ID=%3d \n", robot.robot_id());

    printf(" POS=<%9.2f,%9.2f> \n", robot.x(), robot.y());
    printf(" VEL=<%9.2f,%9.2f> \n", robot.vx(), robot.vy());

    printf("ANGLE=%6.3f \n", robot.orientation());
    printf("ANGLE VEL=%6.3f \n", robot.vorientation());
}

int main(int argc, char *argv[])
{

    RoboCupSSLClient client(10020, "127.0.0.1");
    VSSClient sim_client(20011, "127.0.0.1");

    client.open(false);

    fira_message::sim_to_ref::Environment packet;

    while (true)
    {
        if (client.receive(packet))
        {
            printf("-----Received Wrapper Packet---------------------------------------------\n");
            //see if the packet contains a robot detection frame:
            if (packet.has_frame())
            {
                fira_message::Frame detection = packet.frame();

                int robots_blue_n = detection.robots_blue_size();
                int robots_yellow_n = detection.robots_yellow_size();

                //Ball info:

                fira_message::Ball ball = detection.ball();
                printf("-Ball:  POS=<%9.2f,%9.2f> \n", ball.x(), ball.y());

                //Blue robot info:
                for (int i = 0; i < robots_blue_n; i++)
                {
                    fira_message::Robot robot = detection.robots_blue(i);
                    printf("-Robot(B) (%2d/%2d): ", i + 1, robots_blue_n);
                    printRobotInfo(robot);

                    if (robot.x() <= 0)
                    {
                        sim_client.sendCommand(i, 10.0, 10.0);
                    }
                    else
                    {
                        sim_client.sendCommand(i, -10.0, -10.0);
                    }
                }

                //Yellow robot info:
                for (int i = 0; i < robots_yellow_n; i++)
                {
                    fira_message::Robot robot = detection.robots_yellow(i);
                    printf("-Robot(Y) (%2d/%2d): ", i + 1, robots_yellow_n);
                    printRobotInfo(robot);
                }
            }

            //see if packet contains geometry data:
            if (packet.has_field())
            {
                printf("-[Geometry Data]-------\n");

                const fira_message::Field &field = packet.field();
                printf("Field Dimensions:\n");
                printf("  -field_length=%f (mm)\n", field.length());
                printf("  -field_width=%f (mm)\n", field.width());
                printf("  -goal_width=%f (mm)\n", field.goal_width());
                printf("  -goal_depth=%f (mm)\n", field.goal_depth());
            }
        }
    }

    return 0;
}
