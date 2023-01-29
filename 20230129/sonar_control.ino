#include <NewPing.h>

#define sonar_num 3 // 초음파 갯수
#define MAX_DiSTACE 150

float UltrasonicSensorData[sonar_num];

NewPing sonar[sonar_num]=
{
  NewPing(53, 52, MAX_DiSTACE),
  NewPing(51, 50, MAX_DiSTACE),
  NewPing(49, 48, MAX_DiSTACE)
};

void read_ultrasonic_sensor()
{
  UltrasonicSensorData[0] = sonar[0].ping_cm()*10;
  UltrasonicSensorData[1] = sonar[1].ping_cm()*10;
  UltrasonicSensorData[2] = sonar[2].ping_cm()*10;
}

void send_sonar_sensor_data()
{
  int i;
  for(i=0; i < sonar_num; i++)
  {
    Serial.print(UltrasonicSensorData[i]);
    Serial.print(" ");
  }
  Serial.println(" ");
}

void setup()
{
  Serial.begin(115200);
  // trig :  출력모드 , echo : 입력모드
}

void loop()
{
  read_ultrasonic_sensor();
  send_sonar_sensor_data();
}
