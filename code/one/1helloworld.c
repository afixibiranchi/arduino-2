// Designing Interactive Electronics with Arduino
// day one: getting started 

// program 1: hello, world!
// blink onboard pin 13 LED forever and ever

void setup() {                
  pinMode(13, OUTPUT);     
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000);
}