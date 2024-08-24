int frequencia = 1000;
int pinoBuzzer = 9;
int pinoBotao1 = 8;
int pinoBotao2 = 7;

void setup(){
  pinMode (9, OUTPUT);
  pinMode (8, INPUT_PULLUP);
  pinMode (7, INPUT_PULLUP);
}

void loop(){
  if(digitalRead(8) == LOW){
  frequencia= frequencia+ 100;
}

  if(digitalRead(7)==LOW){
    frequencia=frequencia-100; 
  }

  tone(9, frequencia);
  delay(1000);
  noTone(9);
  delay(1000);
}
