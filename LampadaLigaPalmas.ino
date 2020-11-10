  #define pinSom 7
#define pinRele1 2
#define tempoMaximoDeUmaPalma  150 //milisegundos
#define tempoMaximoEntrePalmas 500 //milisegundos
int counter = 0;
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;
 
const int buzzerPin = 5;
const int ledPin1 = 12;
const int ledPin2 = 13;
int contaPalmas = 0;
long tempoEspera = 0;
long tempoEsperaEntrePalmas = 0;

void executarAcao();

void setup() {
  pinMode(pinSom, INPUT);
  pinMode(pinRele1, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  //verifica o estado do sensor de som (ele fica normalmente com a porta ligada. Quando ouver uma palma, ele desliga momentaneamente a porta)
  int sensorSom = digitalRead(pinSom);

  //se o sensor detectou palmas
  if (sensorSom == LOW) {

     //espera um tempo para nao detectar a mesma palma mais de uma vez 
     if (tempoEspera == 0) {
        tempoEspera = tempoEsperaEntrePalmas = millis(); 
        contaPalmas++;
     } else if ((millis() - tempoEspera) >= tempoMaximoDeUmaPalma) {
        tempoEspera = 0;
     }
  }

  //caso exceda o tempo maximo entre palmas, zera o contador de palmas
  if ( (contaPalmas != 0) && ((millis() - tempoEsperaEntrePalmas) > 500) ) {
     executarAcao();
     contaPalmas = 0;
     tempoEsperaEntrePalmas = millis();
  }
  
  
}


void executarAcao() 
{
  
  switch (contaPalmas) {
    case 2: 
       digitalWrite(pinRele1, !digitalRead(pinRele1));
       
       break;
    case 3:
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
     digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
     digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, !digitalRead(pinRele1));
    delay(200);
    digitalWrite(pinRele1, digitalRead(pinRele1));
    delay(200);
    
    
    }
    
  }
