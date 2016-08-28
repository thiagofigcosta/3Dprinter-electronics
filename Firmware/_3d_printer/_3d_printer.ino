#include <LiquidCrystal.h>
#include <Stepper.h>

//pinout
#define btn_up 6
#define btn_down 7
#define btn_ok 4
#define btn_back 2
#define buzzer 3
#define led 13
#define HE 22
#define HB 23
#define fan1 24
#define fan2 25
#define esX 26
#define esY 27
#define esZ1 28
#define esZ2 29
#define tempHE A13
#define tempHB A14

//motores de passo
short int axisXSpeed=60;
short int axisYSpeed=60;
short int axisZ1Speed=60;
short int axisZ2Speed=60;
short int axisESpeed=60;

short int stepsPerR=200;
void setup() {
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  pinMode(buzzer,OUTPUT);
  digitalWrite(buzzer,LOW);
  pinMode(fan1,OUTPUT);
  digitalWrite(fan1,LOW);
  pinMode(fan2,OUTPUT);
  digitalWrite(fan2,LOW);
  pinMode(HB,OUTPUT);
  digitalWrite(HB,LOW);
  pinMode(HE,OUTPUT);
  digitalWrite(HE,LOW);
  pinMode(btn_up,INPUT);
  digitalWrite(btn_up,HIGH);
  pinMode(btn_down,INPUT);
  digitalWrite(btn_down,HIGH);
  pinMode(btn_ok,INPUT);
  digitalWrite(btn_ok,HIGH);
  pinMode(btn_back,INPUT);
  digitalWrite(btn_back,HIGH);
  pinMode(esX,INPUT);
  digitalWrite(esX,HIGH);
  pinMode(esY,INPUT);
  digitalWrite(esY,HIGH);
  pinMode(esZ1,INPUT);
  digitalWrite(esZ1,HIGH);
  pinMode(esZ2,INPUT);
  digitalWrite(esZ2,HIGH);
  
  Stepper axisX(stepsPerR,30,31,32,33);
  Stepper axisY(stepsPerR,34,35,36,37);
  Stepper axisZ1(stepsPerR,38,39,40,41);
  Stepper axisZ2(stepsPerR,42,43,44,45);
  Stepper axisE(stepsPerR,46,47,48,49);
  axisX.setSpeed(axisXSpeed);
  axisY.setSpeed(axisYSpeed);
  axisZ1.setSpeed(axisZ1Speed);
  axisZ2.setSpeed(axisZ2Speed);
  axisE.setSpeed(axisESpeed);
  
  LiquidCrystal lcd(12, 11, 10, 9, 8, 7);
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:

}
