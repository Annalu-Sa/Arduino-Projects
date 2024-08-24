void setup() {
  // put your setup code here, to run once:
pinMode (10, OUTPUT);
pinMode (9, OUTPUT);
pinMode (7, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int estadoBotao;
estadoBotao = digitalRead(7);
//digitalRead verifica qual o estado da porta em questão

digitalWrite(10, estadoBotao);
digitalWrite(9, !estadoBotao);
//a exclamaçao mostra a inversão da ação, ou seja, o LED da porta 9 so funciona quando o botão estiver desligado


}
