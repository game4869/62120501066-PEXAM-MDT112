#include <Servo.h>
Servo myservo;

void setup() {
   //pinMode(13,OUTPUT);

   //Serial.begin(9600); 

   Serial.begin(9600); 
   myservo.attach(9);
   
}
void loop() {
    //tone(13,600,300);
    //delay(1000);

    //Serial.println("Hello MDT!!!");
    //delay(250);
    
    myservo.write(0);
    delay(800);
    myservo.write(150);
    delay(800);
    Serial.println("Servo : 150 degrees");
    delay(250);
}
