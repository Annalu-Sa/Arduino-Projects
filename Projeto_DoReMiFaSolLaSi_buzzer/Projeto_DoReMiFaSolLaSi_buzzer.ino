const int pino_buzzer = 10;//onde o pino buzzer está conectado

//frequencias de cada nota musical em Hertz(Hz)
const int d  = 261;//Dó
const int r = 293;//Ré
const int m = 329;//Mi
const int f = 349;//Fá
const int s = 391;//Sol
const int l = 440;//Lá
const int c = 493;//Si

void setup() {
pinMode(pino_buzzer, OUTPUT);//configura o pino com o buzzer como saída

}

void loop() {

  //toca a nota Dó por 1 seg
  tone(pino_buzzer, d);
  delay(1000);

  //Toca a nota Ré por 1 seg
  tone(pino_buzzer, r);
  delay(1000);

  //Toca a nota Mi por 1 seg 
  tone(pino_buzzer, m);
  delay(1000);

  //Toca a nota Fá por 1 seg
  tone(pino_buzzer, f);
  delay(1000);

  //Toca a nota Sol por 1 seg
  tone(pino_buzzer, s);
  delay(1000);

  //Toca a nota Lá por 1 seg
  tone(pino_buzzer, l);
  delay(1000);

  //Toca a nota Si por 1 seg
  tone(pino_buzzer, c);
  delay(1000);

  //Desliga o Buzzer por 2 seg
  noTone(pino_buzzer);
  delay(2000);
}
