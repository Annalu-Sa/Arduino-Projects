#include <Arduino.h>

int frequencia = 2000 ; 

void setup()
{
  pinMode(8, OUTPUT); //led1
  pinMode(9, OUTPUT); //led2
  pinMode(7, OUTPUT); //buzzer
  pinMode(6, INPUT_PULLUP); //botão
  
}

void loop()
{
 if (digitalRead(6) == LOW) { // Botão Pressionado;
   
   for (int i = 0; i <= 4; i++) {
    
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  tone (7,frequencia);
  delay(500); 
  noTone(7); 
  tone (7,frequencia-1000); 
  delay(500);
  noTone(7);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  tone (7,frequencia);
  delay(500);
  noTone(7);
  tone (7,frequencia-1000);
  delay(500);
  noTone(7);
   }
   
 
  
  }
  else {                    
    noTone(7);
	digitalWrite(8, LOW);   
    digitalWrite(8, LOW);
  }
}