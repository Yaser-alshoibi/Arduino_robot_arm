#include <Servo.h>


Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int P1 = A1;
int P2 = A2;
int P3 = A3;
int P4 = A4;
int P5 = A5;

int P_Value1;
int P_Value2;
int P_Value3;
int P_Value4;
int P_Value5;


void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
}

void loop()
{
  P_Value1 = analogRead(P1);
  P_Value1 = map (P_Value1,0,1023,0,90);
  servo1.write(P_Value1);
  delay(15);
  
  P_Value2 = analogRead(P2);
  P_Value2 = map (P_Value2,0,1023,0,90);
  servo2.write(P_Value2);
  delay(15);
  
  P_Value3 = analogRead(P3);
  P_Value3 = map (P_Value3,0,1023,0,90);
  servo3.write(P_Value3);
  delay(15);
  
  P_Value4 = analogRead(P4);
  P_Value4 = map (P_Value4,0,1023,0,90);
  servo4.write(P_Value4);
  delay(15);
  
  P_Value5 = analogRead(P5);
  P_Value5 = map (P_Value5,0,1023,0,90);
  servo5.write(P_Value5);
  delay(15);
}
