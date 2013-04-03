// Designing Interactive Electronics with Arduino
// day two: C programming

// challenge program 1: debounced light switch
// a simple toggle button and LED switch
// connect one side of the button to a digital pin and the other to GND
// use a library to simplify debouncing calculations

#include <Bounce.h>

int button = 8;
int LED = 13;

// create a bounced button object with 5 millisec debounce time
Bounce buttonBounced = Bounce(button, 5);

void setup() {
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT); 
}

void loop() {
  // update debounce
  buttonBounced.update();

  // get debounced value
  int buttonState = buttonBounced.read();

  // turn off or on the LED depeding on the buttonState
  digitalWrite(LED, buttonState);
}
