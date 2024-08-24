//Declarando variáveis que não mudarão
const int ledGreenCar = 8;  //Porta do Led Verde do semáforo dos carros 
const int ledYellowCar = 10;  //Porta do Led Amarelo do semáforo dos carros 
const int ledRedCar = 12;  //Porta do Led Vermelho do semáforo dos carros 

const int ledGreenPed = 6;  //Porta do Led Verde do semáforo dos pedestres 
const int ledRedPed = 4;  //Porta do Led Vermelho do semáforo dos pedestres 

const int botPed = 2;   //Porta do botão do semáforo dos pedestres 

//Declarando variáveis que mudarão
unsigned long tempo;    //Guardará o momento em que o programa iniciou

void setup()
{
  tempo = millis(); //Atribui à variável tempo o valor do início do programa
  
  pinMode(ledGreenCar, OUTPUT);   //Define a porta 8 como saída
  pinMode(ledYellowCar, OUTPUT);    //Define a porta 10 como saída
  pinMode(ledRedCar, OUTPUT);   //Define a porta 12 como saída
  
  pinMode(ledGreenPed, OUTPUT);   //Define a porta 6 como saída
  pinMode(ledRedPed, OUTPUT);   //Define a porta 4 como saída
  
  pinMode(botPed, INPUT_PULLUP);    //Define a porta 2 como entrada como Resistor de Pull Up

  digitalWrite(ledGreenCar, 1);   //Acende a luz Verde do semáforo dos carros
  digitalWrite(ledRedPed, 1);    //Acende a luz Vermelha do semáforo dos pedestres
  
}

void loop(){
  int leitura = digitalRead(botPed); // Atribui o valor de leitura da porta à variável leitura
  
  if((millis() - tempo) > 5000){ //Verifica se já foram passados 5 segundos
    
    if(leitura == 0){ //Verifica se o botão de pedestres foi pressionado
      
      digitalWrite(ledGreenCar, 0);   //Apaga a luz verde do semáforo dos carros
      digitalWrite(ledYellowCar, 1);    //Acende a luz amarela do semáforo dos carros
      delay(2000);    //Espera de 2 segundos de segurança
      digitalWrite(ledYellowCar, 0);    //Apaga a luz amarela do semáforo dos carros
      digitalWrite(ledRedCar, 1);   //Acende a luz vermelha do semáforo dos carros
      delay(1000);    //Espera de 1 segundos de segurança
      digitalWrite(ledRedPed, 0);   //Apaga a luz vermelha do semáforo dos pedestres
      digitalWrite(ledGreenPed, 1);   //Acende a luz verde do semáforo dos pedestres
      delay(5000);    //Espera de 5 segundos de segurança
      
      for(int i = 0 ; i<5 ; i++){		//Comando para repetir a luz verde dos pedestres
      	digitalWrite(ledGreenPed, 0);   //Apaga a luz verde do semáforo dos pedestres
      	delay(500);   //Espera de 0,5 segundos de segurança
      	digitalWrite(ledGreenPed, 1);   //Acende a luz verde do semáforo dos pedestres
      	delay(500);   //Espera de 0,5 segundos de segurança
      }      
      digitalWrite(ledGreenPed, 0);    //Apaga a luz verde do semáforo dos pedestres   
      digitalWrite(ledRedPed, 1);   //Acende a luz vermelha do semáforo dos pedestres
      
      delay(500);   //Espera de 0,5 segundos de segurança
      
      digitalWrite(ledRedCar, 0);   //Apaga a luz vermelha do semáforo dos carros
      digitalWrite(ledGreenCar, 1);   //Acende a luz verde do semáforo dos carros
            
      tempo = millis(); //Atualiza o valor atribuido ao tempo
    }
  }
  delay(10);
}