// Initalize your global variables here 
const int ledPin = 11;

/* Set up code that will only run once goes here.
 *  
 */
void setup() {
  // Initialise the type of the Output and Input pins.
  pinMode(ledPin, OUTPUT);
}

/* Code to run repeteadly goes here. Put the main
 *  logic of your program here.
 */
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
