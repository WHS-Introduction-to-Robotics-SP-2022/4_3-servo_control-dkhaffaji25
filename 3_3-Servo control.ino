#include <Servo.h>

Servo myservo;  


int pos = 0;    

void setup() {
  myservo.attach(9);  
}

void loop() {
    myservo.write(54);             
    delay(300);                       
  
   myservo.write(167);              
    delay(300);                       
  
  myservo.write(104);              
    delay(300); 
}
