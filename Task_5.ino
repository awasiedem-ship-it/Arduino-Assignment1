int startValue = 5;      //Step 1 : Create variable
int ledPin = 13;        

void flashLED(int times) {           // Your own function
  int flashCount = times;            // Own loop variable inside function
  while (flashCount > 0){
    digitalWrite(ledPin, HIGH);      // LED ON
    delay(200);                      // PN for 200ms
    digitalWrite(ledPin, LOW);       // LED OFF
    delay(200);                      // OFF for 200ms
    flashCount = flashCount - 1;     // Count down flashes
  }      

}
void setup() {
    pinMode(ledPin, OUTPUT);         // Configure Pin 13 as OUTPUT
    Serial.begin(9600);              // Start Serial communication

    Serial.println("=== Smart Countdown Starting ===");


  int count = startValue;            // Use while loop to count DOWN
  while (count > 0) {                // Loop runs while count > 0
     Serial.print("Count: ");        // Print current count
     Serial.println(count);

     flashLED(count);                // Call function - blank LED 'count' times

     delay(1000);                    // Wait 1 second
     count = count - 1;              //Count down by 1
  }

   Serial.println("=== Countdown Complete ===");
}
  // put your setup code here, to run once:

void loop() {
  //Everything happens once in setup()
  // put your main code here, to run repeatedly:

}
