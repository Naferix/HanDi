// Header file to acesss servo motor functiouns
#include <Servo.h> 

//Initializing servos
Servo servo1; 
Servo servo2;
Servo servo3;

// Refers to pins on the Arduino board
int a = A0;
int b = A1;
int c = A2;

// declaring vals with values = 0
int val1 = 0;
int val2 = 0;
int val3 = 0;

// Initialization function
void setup() {
  // lets the variable control the servo attached to the specified pin number
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);

  // Sets angle of servos to 0 degrees
  servo1.write(0); 
  servo2.write(0); 
  servo3.write(0); 

  // Sets baud rate for communication to 9600 bits/sec
  Serial.begin(9600); 
}

void loop() {
  // reads analog value in letter variables and stores it in the val variables
  val1 = analogRead(a);
  val2 = analogRead(b);
  val3 = analogRead(c);

  if(val1 < 40){
    // Changles angle of servo to 180 degrees
    servo1.write(180);
    delay(3);
  }

  // If flex sensor is straight then it means that the servo should also be straight
  if(val1 > 200){
    servo1.write(0);
    delay(3);
  }

    if(val2 < 40){
    // Changles angle of servo to 180 degrees
    servo2.write(180);
    delay(3);
  }

  // If flex sensor is straight then it means that the servo should also be straight
  if(val2 > 200){
    servo2.write(0);
    delay(3);
  }

    if(val3 < 40){
    // Changles angle of servo to 180 degrees
    servo3.write(180);
    delay(3);
  }

  // If flex sensor is straight then it means that the servo should also be straight
  if(val3 > 200){
    servo3.write(0);
    delay(3);
  }
}
