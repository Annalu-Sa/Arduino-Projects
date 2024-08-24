#include <Servo.h> // Inclui a biblioteca Servo para controlar servos
 
Servo meuServo; // Cria um objeto Servo para controlar o servo motor
int pos; //Declara uma variável para controlar a posição do servo motor 
int val;

int frequencia = 2000 ; 
void setup() {
  Serial.begin(9600);
  
  
  meuServo.attach(5); // Associa o servo motor ao pino digital 5 do Arduino
  meuServo.write(0); // Define a posição inicial do servo motor para 0 graus
  pinMode(8, OUTPUT); //led1
  pinMode(9, OUTPUT); //led2
  pinMode(7, OUTPUT); //buzzer
  pinMode(6, INPUT_PULLUP); //botão
  pinMode(4, INPUT_PULLUP);
}
 
void loop() {
  
  if (digitalRead(6) == LOW) { // Botão Pressionado;
  

    // Movimento do servo de 0 a 90 graus
    for ( pos = 0; pos <= 90; pos++) {
      meuServo.write(pos); // Define a posição atual do servo
      val = pos;
      Serial.println(val);
      
      if(pos % 2 == 0){
        digitalWrite(8, HIGH); 
        digitalWrite(9, LOW); 
        tone (7,frequencia);
        delay(250); 
        noTone(7);
        
      }else{
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        tone (7,frequencia-1000);
        delay(250);
        noTone(7);
      	}
    }
 }
  
  if(val == 90){
  	digitalWrite(8, HIGH); 
    digitalWrite(9, LOW); 
    tone (7,frequencia);
    delay(250); 
    noTone(7);
   	digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    tone (7,frequencia-1000);
    delay(250);
    noTone(7);
  }else{
  	digitalWrite(8, LOW); 
    digitalWrite(9, LOW); 
    noTone (7);
  }
  
  if (digitalRead(4) == LOW) {
    for (int pos = 90; pos >= 0; pos--) {
      meuServo.write(pos); // Define a posição atual do servo
      val = pos;
      Serial.println(val);
      if(pos % 2 == 0){
        digitalWrite(8, HIGH); 
        digitalWrite(9, LOW); 
        tone (7,frequencia);
        delay(250); 
        noTone(7);
        
      }else{
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        tone (7,frequencia-1000);
        delay(250);
        noTone(7);
      	}
    }
  }
}
