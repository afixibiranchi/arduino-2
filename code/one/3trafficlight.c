// Designing Interactive Electronics with Arduino
// day one: getting started 

// program 3: traffic light
// a simple traffic light simulator program

int LEDgreen = 12;
int LEDyellow = 11;
int LEDred = 10;

void setup() {                
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDyellow, OUTPUT);
  pinMode(LEDred, OUTPUT);
}

void loop() {
  // red light
  digitalWrite(LEDred, HIGH);
  digitalWrite(LEDyellow, LOW);
  digitalWrite(LEDgreen, LOW);
  delay(4000);

  // green light
  digitalWrite(LEDred, LOW);
  digitalWrite(LEDgreen, HIGH);
  delay(2000);

  // yellow light
  digitalWrite(LEDyellow, HIGH);
  digitalWrite(LEDgreen, LOW);
  delay(500);
}