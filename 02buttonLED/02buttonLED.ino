// Initalize your global variables here 
const int ledPin = 12;
const int buttonPin = 2;

int buttonState = 0;
bool ledOn = false;
/* Set up code that will only run once goes here.
 *  
 */
void setup() {
  // Initialise the type of the Output and Input pins.
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

/* Code to run repeteadly goes here. Put the main
 *  logic of your program here.
 */
void loop() {
  if (buttonState == HIGH) {
    if (ledOn) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
    delay(1000);
  }
}
