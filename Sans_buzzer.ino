
//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_D5, NOTE_D5, NOTE_A5, NOTE_GS5, 0, NOTE_G5, 0, NOTE_F5, NOTE_D5, NOTE_F5, NOTE_G5, NOTE_C5, NOTE_C5, NOTE_A5, NOTE_GS5, 0, NOTE_G5, 0, NOTE_F5, NOTE_D5, NOTE_F5, NOTE_G5
  };
int duration = 1500; 

int noteDuration[] = {
  16,16,8,8,16,16,16,8,8,16,16,16,16,8,8,16,16,16,8,8,16,16
};

int buttonPin = 9;
 
void setup() {
 
 pinMode(buttonPin, INPUT_PULLUP);

}
 
void loop() {  
  
  if(digitalRead(buttonPin) == LOW) {
  
    for (int thisNote = 0; thisNote < 22; thisNote++) {
      // pin8 output the voice, every scale is 0.5 sencond
      int nDuration = duration / noteDuration[thisNote];

      tone(8, melody[thisNote], nDuration);

      int pauseBetweenNotes = nDuration * 1.3;
     
      // Output the voice after several minutes
      delay(pauseBetweenNotes);
    }
  }
}
