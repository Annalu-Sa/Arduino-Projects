const int pinoLDR = A0;//pino onde o LDR está conectado
int leitura = 0;//variável para armazenar o valor lido pelo ADC(conversores análogico-digital)
float tensao = 0.0;//variável para armazenar a tensão

void setup() {
  Serial.begin(9600);//9600bps: exibe 9600 bits por seg

  //configura o pino com LDR como entrada
  //LDR= Light-Dependent Resistor
  pinMode(pinoLDR, INPUT);//pino A0


}

void loop() {
  //le o valor de tensao no pino do LDR
  leitura = analogRead(pinoLDR);

  //imprime valor lido pelo arduino(0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t");//tabulação

  //converte e imprime o valor em tensão elétrica
  tensao = leitura*5.0/1024.0;
  Serial.print("Tensão: ");
  Serial.print(tensao);
  Serial.print("V");//V de volts

  Serial.print("\n");//nova linha

  delay(1000);

}
