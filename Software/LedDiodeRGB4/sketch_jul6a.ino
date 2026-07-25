
const int ledGreen = D0; 
const int ledBlue = D1; 
const int ledRed = D2; 


void setup() {
  
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledRed, OUTPUT);

  delay(1000);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledBlue, HIGH); 
  digitalWrite(ledRed, HIGH);
}

void loop() {
 
  digitalWrite(ledGreen, LOW);   // лед офф
  delay(1000);               
  digitalWrite(ledGreen, HIGH);    //лед он
  delay(1000); 
 
  digitalWrite(ledBlue, LOW);   // лед офф
  delay(1000);               
  digitalWrite(ledBlue, HIGH);    //лед он
  delay(1000);

  digitalWrite(ledRed, LOW);   // лед офф
  delay(1000);               
  digitalWrite(ledRed, HIGH);    //лед он
  delay(1000);      
}
