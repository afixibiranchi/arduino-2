// Designing Interactive Electronics with Arduino
// day two: C programming

// program 2: modified light switch
// a simple button and LED switch
// connect one side of the button to a digital pin and the other to GND
// internal pullup resistor connected on button pin

int button = 8;
int LED = 13;

void setup() {
  pinMode(button, INPUT);
  digitalWrite(button, HIGH); // enable internal pullup resistor on button pin
  pinMode(LED, OUTPUT); 
}

void loop() {
  // store the current state of the button in a variable
  int buttonState = digitalRead(button);
  // turn off or on the LED depeding on the buttonState
  digitalWrite(LED, buttonState);
}