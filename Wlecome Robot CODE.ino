
//Task : Robot arm movement and interaction


#include <Servo.h>
#include<LiquidCrystal.h>


int trigPin = 14; //Triger UltraSonic
int echoPin = 15; //Echopin UltraSonic
int LED = 16;   //LED insted Bluthoth
LiquidCrystal lcd(5, 6, 7, 8, 9, 10); //screen LCD

// servo object 
Servo LS;
Servo LE;
Servo LW;
Servo RS;
Servo RE;
Servo RW;


void setup(){
 pinMode(trigPin, OUTPUT); 
 pinMode(echoPin, INPUT);
 pinMode(LED, OUTPUT);
 Serial.begin(9600); //Strarts the serial communication
  LS.attach(2);//attach Servo to pin 
  LE.attach(3);
  LW.attach(4);
  RS.attach(13);
  RE.attach(12);
  RW.attach(11);
   lcd.begin(16,2);

  // intial postions for Servo
  LS.write(0);
  LE.write(0);
  LW.write(0);
  RS.write(0);
  RE.write(0);
  RW.write(0);
  
}//end void setup 
 


void loop(){

  //prints the distance on the Monitor
  if(calc_dis() <= 50){//motion#1
    delay(300);
    LS.write(90);
    LE.write(90);
    LW.write(90);
    RS.write(90);
    RE.write(90);
    RW.write(90);
    delay(50);
    lcd.setCursor(0,1);
    lcd.print("    WELCOME      ");
    delay(300);
    digitalWrite(LED,HIGH);

  }
  else if(calc_dis() <= 100){//motion#2
   delay(50);
   LS.write(30);
   LE.write(30);
   LW.write(30); 
   RS.write(30);
   RE.write(30); 
   RW.write(30); 
   lcd.setCursor(0,1);
   lcd.print("  Come Closer :)    "); 

    }
  else if(calc_dis() >= 100){//motion#3
   delay(50);
   LS.write(0);
   LE.write(0);
   LW.write(0); 
   RS.write(0);
   RE.write(0); 
   RW.write(0);
   lcd.setCursor(0,1);
   lcd.print(" TURN OFF SCREEN"); 
        delay(300);
    digitalWrite(LED,LOW);
  }
  
   lcd.setCursor(0,0);
  lcd.print("-SMART METHODE-");
  
  
 
  
  
}//end void loop

//Function for UltraSonic culc 
int calc_dis(){
  
  int duration, distance;//define var
  digitalWrite(trigPin, LOW);//clear the trigPin
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  return distance; 
}