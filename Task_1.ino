void setup() {
  Serial.begin(9600);

  //Create variables of different types
  int myAge = 19;
  float myHeight = 1.75;
  String myName = "Radikal Edem Awasi";
  bool isStudent = true;

  //Print them to the Serial Monitor
  Serial.print("My name is: ");
  Serial.println(myName);

  Serial.print("My age is: ");
  Serial.println(myAge);

  Serial.print("My height is: ");
  Serial.print(myHeight);
  Serial.println(" meters");

  Serial.print("Am I a student? ");
  Serial.println(isStudent);

 


  

  // put your setup code here, to run once:



void loop() {
  //Empty for now - everything that happens in setup()
  // put your main code here, to run repeatedly:

}
