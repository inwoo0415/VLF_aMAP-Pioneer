#include <Servo.h>
#define RC_SERVO_PIN 11
#define NETURAL_ANGLE 90
#define LEFT_STEER_ANGLE -30
#define RIGHT_STEER_ANGLE 30

Servo Steeringservo;
int Steering_Angle = NETURAL_ANGLE;

void steering_control(int steer_angle)
{
  Steeringservo.write(NETURAL_ANGLE + steer_angle);
}

void setup() 
{
  
Steeringservo.attach(RC_SERVO_PIN);
Steeringservo.write(NETURAL_ANGLE);
}

void loop() 
{
  /*steering_control(LEFT_STEER_ANGLE);
  delay(1000);
  steering_control(RIGHT_STEER_ANGLE);
  delay(1000);
  */
}
