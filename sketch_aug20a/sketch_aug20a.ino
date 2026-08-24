void setup() {
  pinMode(2,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  delay(500);
  
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  delay(500);

}
