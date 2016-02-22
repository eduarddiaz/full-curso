#include "Ultrasonic.h"

/*

Alarma de proximidad simple implementada con Arduino y un sensor de distancia por ondas ultrasónicas de 4 pines (Ultrasonic Ranging Module HC-SR04).
Código 100% libre :-)

Pines 5 y 6 se usan para el sensor (Trigger y Echo)
Pin 8 se usa para emitir el tono en el mini parlante de 8 ohm

*/

Ultrasonic ultrasonic(5,6);

long last_print = 0;
long last_tone = 0;

//Umbrales de reproduccion de tonos
long tonethreshold_1 = 5000;
long tonethreshold_2 = 500;
long tonethreshold_3 = 200;
long tonethreshold_4 = 50;

long current_threshold = 10000;

long distancia = 10000;

int sound_pin = 8;

void setup()
{
  last_tone = millis();
  last_print = last_tone;
  pinMode(sound_pin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //Imprime al puerto serial cada segundo, sin usar delay()
  if((millis() - last_print) >= 1000)
  {
    distancia = ultrasonic.Ranging(CM);
    Serial.print(distancia);Serial.println(" cm");
    last_print = millis();
  }

  //Dependiendo de la distancia del obstáculo, así será la frecuencia de reproducción del tono.
  //Rangos son: Entre 2 metros y 1 metro, entre 1 metro y 20 cm, menos de 20 cm, y más de 2 metros
  if(distancia < 200 && distancia >= 100)
    current_threshold = tonethreshold_2;
  else  if(distancia < 100 && distancia >= 20)
    current_threshold = tonethreshold_3;
  else if(distancia < 20)
    current_threshold = tonethreshold_4;
  else
    current_threshold = tonethreshold_1;

  if(millis() - last_tone >= current_threshold)
  {
    tone(sound_pin, 659, 100);
    delay(50);
    noTone(sound_pin);
    last_tone = millis();
  }

}
