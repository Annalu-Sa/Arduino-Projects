void setup() {
 // Faça um programa que conte de zero até 10 e de volta para zero uma vez, com um espaço de
//tempo igual a 0.5 segundos entre cada número e pulando os números 3 e 7, tanto na ida
//quanto na volta.
//Ex: 0 1 2 4 5 6 8 9 10 9 8 6 5 4 2 1 0:

  
  
  

}

void loop() {
  // contar
int x = analogRead(0);
x = map(x, 0, 10, 0, 10);
printf(x);

}
