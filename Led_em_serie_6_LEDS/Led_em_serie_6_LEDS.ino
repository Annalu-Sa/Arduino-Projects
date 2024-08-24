int pinLed[6] = {12, 11, 10, 9, 8, 7};
int numeroLed;

void setup() {

int x;
for (x = 0; x <= 5; x = x + 1) {
  pinMode(pinLed[x], OUTPUT);
  }
}

void loop() {
 for (numeroLed = 0; numeroLed <= 5; numeroLed = numeroLed + 1) {
      digitalWrite( pinLed[numeroLed], HIGH);
      delay(200);
    }
}
