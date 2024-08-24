int frequencia = 1000;
int pinoBuzzer = 9;
int pinoBotao1 = 8;

void setup(){
  pinMode (9, OUTPUT);
  pinMode (8, INPUT_PULLUP);
}

void loop(){
  if(digitalRead(8) == LOW){
  frequencia= frequencia+ 100;
}

  if(digitalRead(8)==HIGH){
    frequencia=frequencia-1000; 
  }

  tone(9, frequencia);
  delay(1000);
  noTone(9);
  delay(1000);
}
