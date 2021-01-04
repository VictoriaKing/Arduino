int potPin = A0;    // Input pin from the potentiometer
int ledPin = 9;     // Output pin to the LED
int potVal = 0;     // A variable to store the potentiometer value
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatdly:
  potVal = analogRead(potPin);    //read from the pot pin, store into potVal
  
  brightness = map(potVal , 0, 1023, 0, 255);   //'map' the brightness so taht potVal [0->1023] corresponds with a value between [0->255]
  
  analogWrite(ledPin, brightness);    //analoge write uses PWM to control LED brightness. It will only owrk on the PWM pins, which pin 9 is.
}
