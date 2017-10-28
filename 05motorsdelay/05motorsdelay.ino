// Initalize your global variables here 
const int motorPin1 = 11;
const int motorPin2 = 10;
const int buttonPin = 8;

int buttonState = 0;
bool motorOn = false;
/* Set up code that will only run once goes here.
 *  
 */
void setup() {
  // Initialise the type of the Output and Input pins.
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
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
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, HIGH);
      delay(2000);
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);
    }
    delay(500);
  }
}
