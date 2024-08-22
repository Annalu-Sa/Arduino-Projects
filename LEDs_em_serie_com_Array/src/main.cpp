#include <Arduino.h>

int ledArray [] = {8, 9, 10, 11, 12};
int count = 0;
int timer = 500;
int ledOrdem []= {1, 2, 3, 4, 5};

void setup() {
Serial.begin(9600);
  for (count = 0; count < 5; count++){
    pinMode (ledArray[count], OUTPUT);
  }
}

void loop() {
  for(count = 0; count < 5; count++){
    digitalWrite(ledArray[count], HIGH);
    Serial.print("Ligando ");
    Serial.print(ledOrdem[count]);
    Serial.println("° LED");
    delay(timer);
    digitalWrite(ledArray[count], LOW);
  }
}