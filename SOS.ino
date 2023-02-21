const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 3; i++){
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    delay(1000);
  }
  delay(2000);
  for(int i = 0; i < 3; i++){
    digitalWrite(ledPin,HIGH);
    delay(3000);
    digitalWrite(ledPin,LOW);
    delay(1000);
  }
  delay(2000);
  for(int i = 0; i < 3; i++){
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    delay(1000);
  }
  delay(6000);
}
