// Designing Interactive Electronics with Arduino
// day one: getting started 

// challenge program 3: out-of-service
// emergency out-of-service mode for traffic lights
// use 2 red LEDs

// pinout
// direction 1: north-south
int LED1red = 11;
// direction 2: east-west
int LED2red = 10;

void setup() {                
  pinMode(LED1red, OUTPUT);
  pinMode(LED2red, OUTPUT);
}

void loop() {
  // alternate blinking red lights every one second
  digitalWrite(LED1red, HIGH);
  digitalWrite(LED2red, LOW);
  delay(1000);
  digitalWrite(LED1red, LOW);
  digitalWrite(LED2red, HIGH);
  delay(1000);
}
