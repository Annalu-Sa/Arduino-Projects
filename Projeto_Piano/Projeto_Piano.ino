const int pino_botao1 = 7;
const int pino_botao2 = 8;
const int pino_botao3 = 9;
const int pino_buzzer = 10;//onde o pino buzzer está conectado
const int pino_led1 = 11;
const int pino_led2 = 12;
const int pino_led3 = 13;

//frequencias de cada nota musical em Hertz(Hz)
const int d  = 261;//Dó
const int r = 293;//Ré
const int m = 329;//Mi
const int f = 349;//Fá
const int s = 391;//Sol
const int l = 440;//Lá
const int c = 493;//Si

void setup() {
  pinMode(pino_botao1, INPUT_PULLUP);
  pinMode(pino_botao2, INPUT_PULLUP);
  pinMode(pino_botao3, INPUT_PULLUP);
  pinMode(pino_buzzer, OUTPUT);//configura o pino com o buzzer como saída
  pinMode(pino_led1, OUTPUT);
  pinMode(pino_led2, OUTPUT);
  pinMode(pino_led3, OUTPUT);
  
}

void loop() {

  //O tipo bool pode armazenar dois valores: true or false
  //Salva o estado de cada botao:
  bool estado_botao1 = digitalRead(pino_botao1);
  bool estado_botao2 = digitalRead(pino_botao2);
  bool estado_botao3 = digitalRead(pino_botao3);

  if(estado_botao1 == LOW){
    tone(pino_buzzer, d);//Dó
    digitalWrite(pino_led1, HIGH);
  }
  else if(estado_botao2 == LOW){
    tone(pino_buzzer, r);//Ré
    digitalWrite(pino_led2,HIGH);
  }
  else if(estado_botao3 == LOW){
    tone(pino_buzzer, m);//Mi
    digitalWrite(pino_led3, HIGH);
  }
  else{
    noTone(pino_buzzer);//desliga o buzzer
    digitalWrite(pino_led1, LOW);
    digitalWrite(pino_led2, LOW);
    digitalWrite(pino_led3, LOW);
    
  }
  
  /*//toca a nota Dó por 1 seg
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
  delay(2000);*/
}
