void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, INPUT);


  
}

void loop()
{
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
  
  
  if(digitalRead(4)== HIGH){  //enquanto o botao ta apertado, piscar LED amarelo
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    
    do{digitalWrite(9,HIGH);
    delay(500);
    digitalWrite(9,LOW);
    delay(500);
    }while(digitalRead(4)== HIGH);
  }
  else{
    digitalWrite(10,HIGH);
    digitalWrite(7,HIGH);//depois de segurar o botão, ligar LED vermelho e desligar verde
  }
delay(5000);
     
}
