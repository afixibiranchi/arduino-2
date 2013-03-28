// Designing Interactive Electronics with Arduino
// day one: getting started 

// program 2: blink external LED
// blink an external LED connected to a pin

int LEDpin = 12;

void setup() {                
  pinMode(LEDpin, OUTPUT);     
}

void loop() {
  digitalWrite(LEDpin, HIGH);
  delay(1000); 
  digitalWrite(LEDpin, LOW);
  delay(1000);
}