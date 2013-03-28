// Designing Interactive Electronics with Arduino
// day one: getting started 

// challenge program 2: two-way traffic light
// control traffic from BOTH directions without a crash
// use 6 LEDs & 2 resistors

// pinout
// direction 1: north-south
int LED1green = 12;
int LED1yellow = 11;
int LED1red = 10;
// direction 2: east-west
int LED2green = 12;
int LED2yellow = 11;
int LED2red = 10;

void setup() {                
  pinMode(LED1green, OUTPUT);
  pinMode(LED1yellow, OUTPUT);
  pinMode(LED1red, OUTPUT);
  pinMode(LED2green, OUTPUT);
  pinMode(LED2yellow, OUTPUT);
  pinMode(LED2red, OUTPUT);

  // good practice: on startup, turn on both red lights
  stopAll();
}

void loop() {
  // temporarily stop both directions
  digitalWrite(LED1red, HIGH);
  digitalWrite(LED2red, HIGH);
  delay(300);

  // green for east-west (direction 2) traffic
  // red for north-south (direction 1) traffic
  clearAll();
  digitalWrite(LED2green, HIGH);
  digitalWrite(LED1red, HIGH);
  delay(3000);

  // yellow for east-west (direction 2) traffic
  // red for north-south (direction 1) traffic
  clearAll();
  digitalWrite(LED2yellow, HIGH);
  digitalWrite(LED1red, HIGH);
  delay(500);

  // red for both directions
  stopAll();
  delay(300);

  // red for east-west (direction 2) traffic
  // green for north-south (direction 1) traffic
  clearAll();
  digitalWrite(LED2red, HIGH);
  digitalWrite(LED1green, HIGH);
  delay(3000);  

  // red for east-west (direction 2) traffic
  // yellow for north-south (direction 1) traffic
  clearAll();
  digitalWrite(LED2red, HIGH);
  digitalWrite(LED1yellow, HIGH);
  delay(500); 
}

// turn off all LEDs
void clearAll() {
  digitalWrite(LED1red, LOW);
  digitalWrite(LED1yellow, LOW);
  digitalWrite(LED1green, LOW);
  digitalWrite(LED2red, LOW);
  digitalWrite(LED2yellow, LOW);
  digitalWrite(LED2green, LOW);
}

// turn on both red LEDs, stopping all traffic
void stopAll() {
  digitalWrite(LED1red, HIGH);
  digitalWrite(LED1yellow, LOW);
  digitalWrite(LED1green, LOW);
  digitalWrite(LED2red, HIGH);
  digitalWrite(LED2yellow, LOW);
  digitalWrite(LED2green, LOW);
}