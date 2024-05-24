
#include <FastLED.h>
#include <Wire.h>
#include "paj7620.h"
#define NUM_LEDS 40
#define rotarySensor A1
#define knop_play 8
#define knop_playlist 10
#define LED_PIN 6
#define ledPin 6

#define GES_REACTION_TIME 500 // You can adjust the reaction time according to the actual circumstance.
#define GES_ENTRY_TIME 800 // When you want to recognize the Forward/Backward gestures, your gestures' reaction time must less than GES_ENTRY_TIME(0.8s). 
#define GES_QUIT_TIME 1000

CRGB leds[NUM_LEDS];

String oldScreenbuttonState = "led_0";
String newScreenbuttonState ="led_0";
int oldSensorValue;
int knopstatus = 0;


void setup() {
  Serial.begin(9600);
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  pinMode(ledPin, OUTPUT);
  pinMode(rotarySensor, INPUT);
  pinMode(knop_play, INPUT_PULLUP);
  pinMode(knop_playlist, INPUT_PULLUP);

  uint8_t error = 0;

  Serial.println("\nPAJ7620U2 TEST DEMO: Recognize 9 gestures.");
 
 
error = paj7620Init();// initialize Paj7620 registers
if (error) 
{
Serial.print("INIT ERROR,CODE:");
Serial.println(error);
}
else
{
Serial.println("INIT OK");
}
Serial.println("Please input your gestures:\n");
}

void loop() {

int sensorValue = analogRead(rotarySensor)*10.2;
int sensorvalue_marge = (round(sensorValue/5)*5);


String knopstatus_nieuw_play;
String knopstatus_nieuw_playlist;
String knopstatus_oud_play;
String knopstatus_oud_playlist;


//Serial.println(abs(oldSensorValue - sensorvalue_marge));

  if (abs(oldSensorValue - sensorvalue_marge)>5){
    Serial.print("angle||");
    Serial.println(sensorvalue_marge);
    FastLED.setBrightness(sensorvalue_marge/10+20);
    FastLED.show();
    oldSensorValue = sensorvalue_marge;
  }

  byte knopstatus = digitalRead(knop_play);

  if (sensorvalue_marge == 0){
    knopstatus_nieuw_play = "knop_0";}
  else if (sensorvalue_marge < 245){
    knopstatus_nieuw_play = "knop_0";}
  else if ( sensorvalue_marge < 500){
    knopstatus_nieuw_play = "knop_1";}
  else if (sensorvalue_marge < 770){
    knopstatus_nieuw_play = "knop_2";}
  else if (sensorvalue_marge < 1025){
    knopstatus_nieuw_play = "knop_3";}  

  if(knopstatus == LOW){
    if(knopstatus_oud_play != knopstatus_nieuw_play){
      knopstatus_oud_play = knopstatus_nieuw_play;
      Serial.println(knopstatus_nieuw_play);
      delay(300);
    }
    }

  byte knopstatus_playlist = digitalRead(knop_playlist);

  if (sensorvalue_marge != 0){
    knopstatus_nieuw_playlist = "knop_5";}

  if(knopstatus_playlist == LOW){
    if(knopstatus_oud_playlist != knopstatus_nieuw_playlist){
      knopstatus_oud_playlist = knopstatus_nieuw_playlist;
      Serial.println(knopstatus_nieuw_playlist);
      delay(300);
    }
    }
  

  if(Serial.available()){
      newScreenbuttonState = Serial.readStringUntil(';');
  }

  if(newScreenbuttonState == "led_0"){
    for (int i = 0; i < NUM_LEDS; i += 1) {
    leds[i] = CRGB::Red;
  }
  
  FastLED.show();
  
    oldScreenbuttonState = newScreenbuttonState;
  }
  if(newScreenbuttonState == "led_1"){
    for (int i = 0; i < NUM_LEDS; i += 1) {
    leds[i] = CRGB::Green; //
    

  }
  
  FastLED.show();

    oldScreenbuttonState = newScreenbuttonState;
  }

  if(newScreenbuttonState == "led_2"){
    for (int i = 0; i < NUM_LEDS; i += 1) {
  leds[i] = CRGB::DarkBlue;
  }


  FastLED.show();

    oldScreenbuttonState = newScreenbuttonState;
  }

if(newScreenbuttonState == "led_3"){
    for (int i = 0; i < NUM_LEDS; i += 1) {
  leds[i] = CRGB::Red;
  }


  FastLED.show();

    oldScreenbuttonState = newScreenbuttonState;
  }

  uint8_t data = 0, data1 = 0, error;
 
 
error = paj7620ReadReg(0x43, 1, &data);// Read Bank_0_Reg_0x43/0x44 for gesture result.
if (!error) 
{
switch (data) // When different gestures be detected, the variable 'data' will be set to different values by paj7620ReadReg(0x43, 1, &data).
{
case GES_RIGHT_FLAG:
delay(GES_ENTRY_TIME);
paj7620ReadReg(0x43, 1, &data);
if(data == GES_FORWARD_FLAG) 
{
Serial.println("Forward");
delay(GES_QUIT_TIME);
}
else if(data == GES_BACKWARD_FLAG) 
{
Serial.println("Backward");
delay(GES_QUIT_TIME);
}
else
{
Serial.println("Right");
}          
break;
case GES_LEFT_FLAG: 
delay(GES_ENTRY_TIME);
paj7620ReadReg(0x43, 1, &data);
if(data == GES_FORWARD_FLAG) 
{
Serial.println("Forward");
delay(GES_QUIT_TIME);
}
else if(data == GES_BACKWARD_FLAG) 
{
Serial.println("Backward");
delay(GES_QUIT_TIME);
}
else
{
Serial.println("Left");
}          
break;
case GES_UP_FLAG:
delay(GES_ENTRY_TIME);
paj7620ReadReg(0x43, 1, &data);
if(data == GES_FORWARD_FLAG) 
{
Serial.println("Forward");
delay(GES_QUIT_TIME);
}
else if(data == GES_BACKWARD_FLAG) 
{
Serial.println("Backward");
delay(GES_QUIT_TIME);
}
else
{
Serial.println("Up");
}          
break;
case GES_DOWN_FLAG:
delay(GES_ENTRY_TIME);
paj7620ReadReg(0x43, 1, &data);
if(data == GES_FORWARD_FLAG) 
{
Serial.println("Forward");
delay(GES_QUIT_TIME);
}
else if(data == GES_BACKWARD_FLAG) 
{
Serial.println("Backward");
delay(GES_QUIT_TIME);
}
else
{
Serial.println("Down");
}          
break;
case GES_FORWARD_FLAG:
Serial.println("Forward");
delay(GES_QUIT_TIME);
break;
case GES_BACKWARD_FLAG:  
Serial.println("Backward");
delay(GES_QUIT_TIME);
break;
case GES_CLOCKWISE_FLAG:
Serial.println("Clockwise");
break;
case GES_COUNT_CLOCKWISE_FLAG:
Serial.println("anti-clockwise");
break;  
default:
paj7620ReadReg(0x44, 1, &data1);
if (data1 == GES_WAVE_FLAG) 
{
Serial.println("wave");
}
break;
}
}
delay(100);

}
