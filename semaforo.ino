#include <Ultrasonic.h>
//LARA(esquerdo - 1 - sempre ligado)
#define LED_VERMELHO 5
#define LED_AMARELO 19
#define LED_VERDE 18

//CLARA(direito - 2 - liga com o sensor)
#define led_vermelho 26
#define led_amarelo 27
#define led_verde 14
//
#define ECHO 33
#define TRIG 32

Ultrasonic ultrasonic(TRIG,ECHO);

void setup() {
Serial.begin(9600);
// pinMode(TRIG, OUTPUT);
// pinMode(ECHO, INPUT);
pinMode(LED_AMARELO,OUTPUT);
pinMode(LED_VERMELHO, OUTPUT);
pinMode(LED_VERDE, OUTPUT);
pinMode(led_vermelho, OUTPUT);
pinMode(led_amarelo, OUTPUT);
pinMode(led_verde, OUTPUT);

}

void loop() {

  int distancia = ultrasonic.read();
  Serial.println(distancia);
  
  if (distancia >15) {
   digitalWrite(LED_VERDE, HIGH);
   digitalWrite(LED_VERMELHO, LOW);
   digitalWrite(LED_AMARELO,LOW);

   digitalWrite(led_vermelho, HIGH);
   digitalWrite(led_amarelo, LOW);
   digitalWrite(led_verde, LOW);

    delay(10);
  }
    
  if (distancia <= 15) {
    digitalWrite(LED_AMARELO,HIGH);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, LOW);
    
   digitalWrite(led_vermelho, HIGH);
   digitalWrite(led_amarelo, LOW);
   digitalWrite(led_verde, LOW);

    delay(3000);
  
    digitalWrite (LED_VERMELHO, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);

   digitalWrite(led_vermelho, LOW);
   digitalWrite(led_amarelo, LOW);
   digitalWrite(led_verde, HIGH);

    delay(3000);

    digitalWrite(LED_AMARELO,LOW);
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_VERDE, LOW);
    
   digitalWrite(led_vermelho, LOW);
   digitalWrite(led_amarelo, HIGH);
   digitalWrite(led_verde, LOW);

    delay(3000);
  
    digitalWrite(LED_AMARELO,LOW);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    
   digitalWrite(led_vermelho, HIGH);
   digitalWrite(led_amarelo, LOW);
   digitalWrite(led_verde, LOW);

    delay(3000);
}

}
 
