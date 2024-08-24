void setup () {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop () {
  
  int intervaloPlaca;
  intervaloPlaca= 200;
  
  
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(intervaloPlaca);

  digitalWrite(9,HIGH);
  digitalWrite(10, LOW);
  delay(1000);
}
