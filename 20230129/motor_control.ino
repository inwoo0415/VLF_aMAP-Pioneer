#define MOTOR_DIR 4
#define MOTOR_PWM 5

void motor_control(int direction, int speed)
{
  digitalWrite(MOTOR_DIR, direction);
  analogWrite(MOTOR_PWM, speed);
}


void setup() 
{
  Serial.begin(115200);
  pinMode(MOTOR_DIR, OUTPUT);
  pinMode(MOTOR_PWM, OUTPUT);
}

void loop() 
{
 Serial.println("Motor Control");
 Serial.print(MOTOR_PWM); 
 int i;
 for(i=0; i < 200; i++)
 {
  motor_control(1,i);
  
 }
}
