/*

Wink Robot
Wink_BaseSketch_Rev01_03
Version 1.3 01/2016

This is a basic sketch that can be used as a starting point
for various functionality of the Wink robot.

This code was written by Kevin King and
Dustin Soodak for Plum Geek LLC.
Portions from other open source projects where noted.
This code is licensed under:
Creative Commons Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0)
https://creativecommons.org/licenses/by-sa/2.0/
Visit http://www.plumgeek.com for Wink information.
Visit http://www.arduino.cc to learn about the Arduino.

*/

#include "WinkHardware.h"  // Leave this line first. Do not edit this line. This causes Arduino
                           // to include background functions when turning your code into
                           // machine language Wink can understand.





// Below is the "setup" function. It runs one time as soon as Wink turns on. You can add stuff
// to this function if you want, but hardwareBegin() should always be the first code in the list.

void setup(){
  hardwareBegin();        //initialize Wink's brain to work with his circuitry
  playStartChirp();       //Play startup chirp and blink eyes
  
  RxIRRestart(4);         //wait for 4 byte IR remote command

  //IR_Play 20
}

byte button;
          
void loop(){

  if(IsIRDone()){             // if an IR packet has been received...
    button = GetIRButton();   // read which button was pressed
    Serial.println(button);

 

//    switch(button){
//
//       case 20:                //PLAY Key
//       motors(150,150);
//       RxIRRestart(4);
//       delay(100);
//       motors(0,0);
//       break;
//        
//    }
    
  } // end of if(IsIRDone())

} //closing curly of the “loop()” function
