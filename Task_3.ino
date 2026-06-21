int ledPin = 13;
void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
  // put your setup code here, to run once:
}

//This is OUR function. It takes one input: how long to wait.
void blinkOnce(int waitTime) {
    digitalWrite(ledPin, HIGH);
    delay(waitTime);
    digitalWrite(ledPin, LOW);
    delay(waitTime);
}

void loop() {
     Serial.println("Fast blink");
     blinkOnce(100); //call our function - fast blink

     Serial.println("Medium blink");
     blinkOnce(300); //call our function - medium blink

     Serial.println("Slow blink");
     blinkOnce(800); //call our function - slow blink

     delay(2000);    //pause for 2 seconds before repeating
  // put your main code here, to run repeatedly:

}
