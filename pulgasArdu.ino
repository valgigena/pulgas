
#include <VarSpeedServo.h>
//botón de trapecio
const int buttonPin = 8;
int buttonState = 0;
//boton de pesa
const int buttonPin2 = 11;
int buttonState2 = 0;
//boton bascula
int buttonPin3 = 5;
int buttonState3 = 0;


//Servos de trapecio
VarSpeedServo myservo;
VarSpeedServo myservo2;

const int servoPin1 = 9;
const int servoPin2 = 10;

//Servo de Pista
VarSpeedServo myservo3;
const int servoPin3 = 6;

void setup() {
  myservo.attach(servoPin1);   //servo1
  myservo2.attach(servoPin2);  //servo2
  myservo3.attach(servoPin3);  //servo3 pista
  // boton input:
  pinMode(buttonPin, INPUT);   //boton trape
  pinMode(buttonPin2, INPUT);   //boton pesa
  pinMode(buttonPin3, INPUT);   //boton bascula


}

void loop() {
  /////////////////////Bascula///////////////////
  buttonState = digitalRead(buttonPin3);
  if (buttonState == HIGH) {
    myservo3.write(179, 90, true);
    delay(1000);
    myservo3.write(30, 90, true);
    delay(1000);
    myservo3.write(179, 90, true);
    delay(1500);
    myservo3.write(30, 90, true);
    delay(1500);
    myservo3.write(179, 90, true);
    delay(2000);
    myservo3.write(30, 90, true);
    delay(2000);
    myservo3.write(179, 90, true);
    delay(2500);
    myservo3.write(30, 90, true);
    delay(2500);
    myservo3.write(179, 90, true);
    delay(3000);
    myservo3.write(30, 90, true);
    delay(3000);
    
  } else {
    myservo3.write(30, 30, true);
    delay(10);
  }
  
  /////////////////////pesa///////////////////
  buttonState = digitalRead(buttonPin2);
  if (buttonState == HIGH) {
    myservo3.write(179, 12, true);
    delay(3000);
    myservo3.write(30, 7, true);
    delay(10);
  } else {
    myservo3.write(30, 30, true);
    delay(10);
  }


  ///////////////////trapes///////////////////
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {

    myservo.write(110, 10, true);
    delay(10);
    myservo.write(70, 10, true);
    delay(10);
    myservo.write(130, 20, true);
    delay(100);
    myservo.write(50, 20, true);
    delay(100);
    myservo.write(140, 30, true);
    delay(100);
    myservo.write(50, 30, true);
    delay(100);
    myservo.write(155, 45, true);
    delay(100);
    myservo.write(30, 45, true);
    delay(100);
    myservo.write(160, 70, true);
    delay(100);
    myservo.write(30, 70, true);
    delay(200);
    myservo.write(175, 100, true);
    delay(200);
    myservo.write(20, 100, true);
    delay(200);
    myservo.write(175, 130, true);
    delay(200);
    myservo.write(20, 130, true);
    delay(200);
    myservo.write(170, 120, true); //tirón
    delay(10);
    myservo.write(160, 120, true);
    delay(10);
    myservo.write(170, 110, true);
    delay(10);
    // frena
    myservo.write(50, 90, true);
    delay(10);
    myservo.write(130, 90, true);
    delay(10);
    myservo.write(70, 50, true);
    delay(10);
    myservo.write(110, 40, true);
    delay(10);
    myservo.write(85, 30, true);
    delay(10);
    myservo.write(95, 20, true);
    delay(10);
    myservo.write(90, 10, true);

    delay(3000);                          //salto

    myservo2.write(120, 110, true);        //cae
    delay(10);
    myservo2.write(60, 110, true);
    delay(10);
    myservo2.write(100, 110, true);
    delay(10);
    myservo2.write(80, 30, true);
    delay(10);
    myservo2.write(95, 30, true);
    delay(10);
    myservo2.write(85, 30, true);
    delay(10);

  } else {
    myservo.write(90, 30, true);
    delay(10);
    myservo2.write(90, 30, true);
  }
}
