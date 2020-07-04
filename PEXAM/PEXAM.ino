#include <Servo.h>
Servo myservo;

#include "TM1637.h"
#define CLK 4
#define DIO 3
TM1637 tm1637(CLK,DIO);

int a = 0000;
int a1 = 0, a2 = 0, a3 = 0;
int d1 = 0, d2 = 0, d3 = 0;
void display_data(int num){
  a1 = num/1000;
  d1 = num%1000;
  a2 = d1/100;
  d2 = d1%100;
  a3 = d2/10;
  d3 = d2%10;
  tm1637.display(0,a1);
  tm1637.display(1,a2);
  tm1637.display(2,a3);;
  tm1637.display(3,d3);
}

void setup() {
   //pinMode(13,OUTPUT);

   //Serial.begin(9600); 

   //Serial.begin(9600); 
   //myservo.attach(9);

   //Serial.begin(9600); 
   //myservo.attach(9);

   //tm1637.init();
   //tm1637.set(BRIGHT_TYPICAL);

   pinMode(13,OUTPUT);

}
void loop() {
    //tone(13,600,300);
    //delay(1000);

    //Serial.println("Hello MDT!!!");
    //delay(250);
    
    //myservo.write(0);
    //delay(800);
    //myservo.write(150);
    //delay(800);
    //Serial.println("Servo : 150 degrees");
    //delay(250);

    //myservo.write(150);
    //delay(800);
    //myservo.write(0);
    //delay(800);
    //Serial.println("Servo : 0 degrees");
    //delay(250);  
    
    //display_data(a);
    
    tone(13,600,500);
    delay(1000);

}
