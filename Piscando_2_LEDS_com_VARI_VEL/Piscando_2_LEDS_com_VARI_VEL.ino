void setup () {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, INPUT);
}

void loop () {
  
  int estadoBotao;
  estadoBotao=digitalRead(7);
  
 
  digitalWrite(10, estadoBotao);
  //o LED na porta 10 vai estar ligado caso o botão esteja ligado
  digitalWrite(9, !estadoBotao);
  //o LED na porta 9 vai estar ligado caso o botão esteja desligado, a exclamação mostra a inversão do comando, q no caso era ligar
 
}
