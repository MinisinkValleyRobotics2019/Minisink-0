#include <kipr/botball.h>
void colorSee();
void startUp();
void blueLineTime();
int channel = 0;
int x = 1;
//variable for blueLineTime

int main()
{
    startUp();
    set_servo_position(0,1700);
        msleep(1000);
    set_servo_position(0,600);
    motor(0,50);
    motor(1,-50);
    msleep(1500);
    colorSee(0);
    set_servo_position(0,600);
    msleep(1000);
    motor(1,10);
    motor(0,-50);
    msleep(4200);
    set_servo_position(0,1700);
    motor(0,50);
    motor(1,-50);
    msleep(550);

   // blueLineTime();
	//motor_power(0, 5000);
   // set_servo_position(0, 1500);
    //msleep(1500);
    return 0;
}

void colorSee(){
    while(x==1){  
        camera_update();
        if (get_object_count(channel) > 1){
            printf("YEEEEEEEEEEE \n.");
 
            int x = 2;
            break;
        
        }
        else{
            printf("Nah neet\n");
        }    
	}
}
    
void startUp(){
	enable_servos();
    camera_open();
    shut_down_in(180000); //shut down in 3 minutes
    
}
    
void blueLineTime(){
    while(x==1){         
        printf("not seeing.");
    // forward function	 mrp(0,50,1500)        
    }
	
    printf("I read le fuego!");
}    
        