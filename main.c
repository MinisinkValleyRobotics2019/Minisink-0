#include <kipr/botball.h>
void goForward(int t);
void goBack(int t);
void TurnLeft(int t);
void TurnRight(int t);
void start_up();
//to turn 90 degrees use msleep 1300

int main()
{
	//wait_for_light(0);
    //forward  right forward left
    
    start_up();
    
    goForward(4000);
    TurnRight(1300);
    goForward(6400);
    TurnLeft(1350);
    
    goBack(2300);
    
    goForward(1000);
    TurnLeft(1300);
    goForward(3000);
    TurnRight(1350);
    goForward(1500);
    
    //goForward(3000);
    //TurnRight(1000);
    //goForward(3000);
    //msleep(1000);
    
    set_servo_position(0,1000); 
    
    return 0;
    
    
}
void start_up(){
    create_connect();
    enable_servos();
}
void goForward(int t){
    create_drive_direct(150,150);
    msleep(t);
}
void TurnLeft(int t){
    create_drive_direct(-150,150);
    msleep(t);
}
void TurnRight(int t){
    create_drive_direct(150,-150);
    msleep(t);
}
void goBack(int t){
    create_drive_direct(-150,-150);
    msleep(t);
}
    
        
