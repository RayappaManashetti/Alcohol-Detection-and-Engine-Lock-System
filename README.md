# Alcohol-Detection-and-Engine-Lock-System
To build a prototype to demonstrate the working of alcohol detection and engine lock system
the features of project are
1. To detect the alcohol consumed by the drivers with the help of MQ-3 Alcohol Sensor
2. To lock the engines when the alcohol is detected
3. To display the messages on lcd display

   The whole project is divided into two parts ie
   1. Software
   2. Hardware

   Coming to software part
   we use Arduino IDE as a code editior
   we use Embedded C programming language

 coming to hardware parts
 we use following components

1. Arduino Uno (ATmega328P microcontroller)
2. MQ-3 Alcohol Sensor
3. 16X2 LCD Display
4. I2C
5. DC motor
6. 1 Channel Relay

   connections
   MQ3= A0;
   Relay=6;
   //LCD
   SDA=A4;
   SCL=A5;

