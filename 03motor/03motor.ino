// Initalize your global variables here 
const int motorPin = 11;
const int buttonPin = 8;

int buttonState = 0;
bool motorOn = false;
/* Set up code that will only run once goes here.
 *  
 */
void setup() {
  // Initialise the type of the Output and Input pins.
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

/* Code to run repeteadly goes here. Put the main
 *  logic of your program here.
 */
void loop() {

  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    motorOn = !motorOn;
    if (motorOn) {
      digitalWrite(motorPin, HIGH);
    } else {
      digitalWrite(motorPin, LOW);
    }
    delay(500);
  }
}
