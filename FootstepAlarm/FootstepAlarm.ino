void setup() {pinMode(12,OUTPUT);Serial.begin(9600);}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0) < 502 || analogRead(A0) > 507) {
    digitalWrite(12,HIGH);
    delay(1000);
  } else {
    digitalWrite(12,LOW);
  }
}
