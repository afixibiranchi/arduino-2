// Designing Interactive Electronics with Arduino
// day one: getting started 

// challenge program 1: euro style
// a slight European modification of the traffic light

int LEDgreen = 12;
int LEDyellow = 11;
int LEDred = 10;

void setup() {                
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDyellow, OUTPUT);
  pinMode(LEDred, OUTPUT);
}

void loop() {
  // red light: stop
  digitalWrite(LEDred, HIGH);
  digitalWrite(LEDyellow, LOW);
  digitalWrite(LEDgreen, LOW);
  delay(4000);

  // red & yellow: get in gear
  digitalWrite(LEDyellow, HIGH);
  delay(500);

  // green light: pedal to the metal
  digitalWrite(LEDred, LOW);
  digitalWrite(LEDgreen, HIGH);
  delay(2000);

  // yellow light: slow down
  digitalWrite(LEDyellow, HIGH);
  digitalWrite(LEDgreen, LOW);
  delay(500);
}