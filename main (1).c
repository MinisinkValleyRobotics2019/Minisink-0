#include <kipr/botball.h>

void Fwd();
void Bwd();
void Stop();
void Left();
void Right();
void ClawOpen();
void ClawClose();
void ClawPush();
void ClawMiddle();
void TurnAround();
int counter();

int main()
{
    
    enable_servos();
    
    Fwd();
    msleep(1000);
    Left();
    Fwd();
    msleep(2000);
    Right();
    ClawOpen();
    Fwd();
    msleep(2750);
    Right();
    ClawPush();
    Fwd();
    msleep(7250);
    Stop();
    msleep(750);
    ClawMiddle();
    msleep(1500);
    Right();
    Fwd();
    msleep(200);
    Right();
    Fwd();
    msleep(3500);
    Left();
    TurnAround();
    Fwd();
    msleep(2250);
    
    
    return 0;
    
    ao();
    
}

void Fwd(){
	motor(0,85);
    motor(1,60);
}
void Bwd(){
	motor(0,-85);
    motor(1,-60);
}
void Stop(){
	motor(0,0);
    motor(1,0);
}
void Left(){
	motor(0,-85);
    motor(1,60);
    msleep(750);
}
void Right(){
	motor(0,56.6);
    motor(1,-40);
    msleep(975);
}
void ClawClose(){
    set_servo_position(0,0);
}
void ClawPush(){
    set_servo_position(0,1050);
}
void ClawMiddle(){
    int counter = 1050;
	set_servo_position(0,counter);
    	while(counter>300){
            msleep(100);
            counter = counter - 100;
            set_servo_position(0, counter);
        }
}
void ClawOpen(){
	set_servo_position(0,1750);
}

    
void TurnAround(){
		motor(0,56.6);
    motor(1,-40);
    msleep(1800);
}
    
