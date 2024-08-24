int pinoBuzzer= 9;
int frequencia= 2000;
int pinoBotao= 8;

void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8)==LOW){
    frequencia= frequencia-1000;
    digitalWrite(5,HIGH); 
  }
  
  if (digitalRead(8)==HIGH){
    frequencia= frequencia;
    digitalWrite(5,LOW); 
  }
  tone(9, frequencia);
  delay(1000);
  noTone(9);
  delay(1000);

}
