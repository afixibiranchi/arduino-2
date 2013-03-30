// Designing Interactive Electronics with Arduino
// day two: C programming

// challenge program 3: reaction test
// counts how long it took you to react to LED turning on

int button = 8;
int LED = 13;

boolean gameStarted = false;

void setup() {
  pinMode(button, INPUT);
  digitalWrite(button, HIGH); // internal pullup for button
  pinMode(LED, OUTPUT);
  randomSeed(analogRead(0)); // generate a better random seed from electrical noise
}

void loop() {
  int randomDelay = random(1000, 4000); // create a random delay time from 1 to 4 seconds

  // wait for the user to press the button to start playing
  if(digitalRead(button)) {
    gameStarted = true;
  }

  while(gameStarted) {
    // display that the game has started
    digitalWrite(LED, HIGH);
    delay(3000);
    digitalWrite(LED, LOW);
    long timeStarted = millis(); // store the time the game started in a long variable
    delay(randomDelay);
    digitalWrite(LED, HIGH);
    long timeEnded; // declare game end time outside of the if statement because of inheritance

    if(digitalRead(button)) {
        timeEnded = millis();
    }

    long timeReacted = timeEnded - (timeStarted + randomDelay); // calculate total time in millisec it took you to react
    // now to show you how you did!
    // calculate number of times I should blink
    int blinkTimes = int(timeReacted / 100);
    // now blink
    for(int i=0; i<blinkTimes; i++){
        digitalWrite(LED, HIGH);
        delay(500);
        digitalWrite(LED, LOW);
        delay(300);
    }

    gameStarted = false; // end the game

  }

}