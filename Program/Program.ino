void setup() {
  //Pins of DC Motor
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 //Pin Of IR Sensor
 pinMode(9,INPUT);
 //Pin of LED
 pinMode(12,OUTPUT);// put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
int IR_State=digitalRead(9);
  if(IR_State==1)
{
  //Motor Rotates In clockwise In Presence of Abstacle For one Second//
 digitalWrite(6,HIGH);
digitalWrite(7,LOW);
delay(1000);
//Motor stops to mentain the Alignment For 5 Seconds//
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(5000);
//Again Motor Rotates In Anticlockwise Direction to return to its original Position For 1 Second  
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(1000);
//Motor Stops at its Original Position
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(10000);
//LED On For 3 Seconds In this Duration We have to Get our abstacle out Then IR State Becomes 0//
digitalWrite(12,HIGH);
delay(3000);
digitalWrite(12,LOW);
digitalWrite(12,LOW);
}
//If there is No abstacle Motor Stops Rotation
if (IR_State==0)
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(1000);

}
