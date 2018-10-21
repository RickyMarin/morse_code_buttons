#define INPUT_BUTTON 2
#define ENTER_BUTTON 3
const int ledPin =  13;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

byte keyPresses[100];

void handleEnter();

void setup() {
  Serial.begin(115200);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(INPUT_BUTTON, INPUT);
  attachInterrupt(1, handleEnter, RISING);
}

void loop() {
  buttonState = digitalRead(INPUT_BUTTON);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

void handleEnter() {
  Serial.println(findChar());
  return;
}



// keyPresses is a byte array
// 0 associated with dot
// 1 associated with dash
// returns character represented by some input
char findChar() {
  return "a";
}

