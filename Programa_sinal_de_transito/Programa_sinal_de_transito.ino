
void setup() {
  //para n ficar repetindo o n° do led colocar " #define pino_LED X", sendo x o n° da saída, seja 10 9 ou 8 como é o caso aqui. Ou faz variável: "int pino= 8", mas o ruim de usar variável é q ela ocupa memória ram do arduino.
 
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(4000);                       // wait for a second
  digitalWrite(10, LOW);// turn the LED off by making the voltage LOW

 digitalWrite(9, HIGH);
 delay(1000);
 digitalWrite(9, LOW);

 digitalWrite(8, HIGH);
 delay(4000);
 digitalWrite(8, LOW);
}
