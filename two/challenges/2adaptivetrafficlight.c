// Designing Interactive Electronics with Arduino
// day two: C programming

// challenge program 2: adaptive traffic light
// an adaptive traffic light that will change depending on how many "cars" are waiting

int LEDgreen = 12;
int LEDyellow = 11;
int LEDred = 10;
int button = 8;

int delayAtRed = 10000; // normal time to stay at red
int decrementAmount = 2000; // amount to decrease per car (button press)

void setup() {
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDyellow, OUTPUT);
  pinMode(LEDred, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // red light
  digitalWrite(LEDred, HIGH);
  digitalWrite(LEDyellow, LOW);
  digitalWrite(LEDgreen, LOW);

  // polling delay function
  // as long as the elapsed time is less than delayAtRed
  for(int i=0; i<delayAtRed; i++) {
    if(digitalRead(button) == 1) delayAtRed -= decrementAmount; // if another car is waiting, decrease the waiting time
    delay(1);
  }

  delayAtRed = 3000; // reset the red delay time for the next iteration

  // green light
  digitalWrite(LEDred, LOW);
  digitalWrite(LEDgreen, HIGH);
  delay(3000);

  // yellow light
  digitalWrite(LEDyellow, HIGH);
  digitalWrite(LEDgreen, LOW);
  delay(500);
}
