#include <kipr/botball.h>

int main()
{
    create_connect();
    printf("Hello World\n");
    //wait_for_light(0);
    shut_down_in(119);
    
    //drive out of DRZ
    create_drive_direct(-105,-105);
    msleep(7000);
    create_drive_direct(-105,105);
    msleep(1600);
    
    //drive to black line
    create_drive_direct(-105,-105);
    msleep(3600);
    create_drive_direct(-105,105);
    msleep(1600);
    
    //faom cage down
    enable_servos();
    set_servo_position(0,800);
    
    //move forward
    create_drive_direct(-105,-105);
    msleep(15000);
    
    create_stop();
    create_disconnect();
    return 0;
}
