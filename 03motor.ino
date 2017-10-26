// Initalize your global variables here 
const int ledPin = 12;
const int buttonPin = 2;
const int motorPin = 5;

int buttonState = 0;
bool ledOn = false;
/* Set up code that will only run once goes here.
 *  
 */
void setup() {
  // Initialise the type of the Output and Input pins.
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

/* Code to run repeteadly goes here. Put the main
 *  logic of your program here.
 */
void loop() {
  if (buttonState == HIGH) {
    if (ledOn) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(motorPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
      digitalWrite(motorPin, LOW);
    }
    delay(1000);
  }
}
