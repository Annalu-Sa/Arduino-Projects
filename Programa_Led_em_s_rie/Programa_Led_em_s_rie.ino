
int pinLed[9] = {12, 11, 10, 9, 8, 7, 6, 5, 4};
//dentro dos colchetes logo após o nome da variável(pinLed) colocar a quantidade de variáveis, no caso 9
// usar chaves, se n o programa n funciona
int numeroLed;
//essa variável diz qual led q está aceso


void setup () {

  //pra n colocar 9 vezes o pinMode, usamos o "loop", laço 'for'
  // importante vc declarar a variável x q foi criada
  int x;
  for (x = 0; x <= 8; x = x + 1) {
    //no "arrei" a variavel 0, a primeira, ja está salva, entao restam somente 8 variáveis
    pinMode(pinLed[x], OUTPUT);
   //pinMode(x, OUTPUT);
    //*
  }
}

void loop () {
 // int numeroLed;
  for (numeroLed = 0; numeroLed <= 8; numeroLed = numeroLed + 1) {
    digitalWrite( pinLed[numeroLed], HIGH);
    delay(1000);
  }
  delay(2000);
}
