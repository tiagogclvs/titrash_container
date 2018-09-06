  /////////////////////
//       TI-Trash      //
//                     //
//       Autores:      //
//   Tiago Goncalves   //
//  Alexandre Salgado  //
// ------------------- //
//     com ajuda de    //
// Dr. Fernando Moita  //
  /////////////////////


#include <Wire.h>
#include <SPI.h>

#define SS_PIN 10
#define RST_PIN 9

//Rele
#define pinR1 5

void setup() {

  //Rele
  pinMode(pinR1, OUTPUT);
}

void loop(){

  digitalWrite(pinR1, LOW); //SOLENOIDE SEM FORNECIMENTO DE ENERGIA
  delay(2000);
  digitalWrite(pinR1, HIGH); //SOLENOIDE COM FORNECIMENTO DE ENERGIA
  delay(1500);
}
