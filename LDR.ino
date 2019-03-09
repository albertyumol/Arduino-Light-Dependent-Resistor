const int lamp = 7;
boolean x = true;

void setup() {
  Serial.begin(9600);
  pinMode(lamp , OUTPUT);

}

void loop() {
  int c = analogRead(A0);
  delay(50);
if ( c<600 && x == true){
  digitalWrite(7,HIGH);
   x = false;
   delay(10);
  }
else if ( c <600 && x == false){
  x = true;
  digitalWrite(7,LOW);
  delay(10);
  }
  Serial.println(c);
}
