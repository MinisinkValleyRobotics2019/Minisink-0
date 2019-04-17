#include <kipr/botball.h>
void start_up();
void turn_oc();
void back();

int main()
{
    start_up();
    set_servo_position(0,0); // close claw
    msleep(2000);
    motor(0,-45);
    motor(1,60);
    msleep(1700); // go forward
    turn_oc(); // turn on center
    return 0;
    set_servo_position(0,450);// open claw
    motor(0,-45);//go forward
    motor(1,60);
    msleep(1700);
    set_servo_position(0,0);//close the claw around the people 
    back();//go backwards   
    
  
    return 0;
}

void start_up(){
	enable_servos();
	shut_down_in(180000); //shut down in 3 minutes
}

void turn_oc(){ // turn on center
    motor(0,-60);
    motor(1,-60);
    msleep(800);
}

void back(){ //go backwards
	motor(0,45);
	motor(1,-60);
	msleep(2300);
}
    
    
    
    