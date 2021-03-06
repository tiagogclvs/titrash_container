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
  
#include <virtuabotixRTC.h>

#define SS_PIN 10
#define RST_PIN 9

virtuabotixRTC myRTC(6, 7, 8);

void setup()  {      
  Serial.begin(9600);

// Formata o RTC para a data atual e a hora no formato:
// segundos, minutos, horas, dias da semana, dias do mes, mes, ano
  myRTC.setDS1302Time(00, 00, 00, 2, 1, 1, 2018);
}


void loop()  {                                                                                                        
  myRTC.updateTime();                                                                                     
                                                                                                        
// Start printing elements as individuals                                                                   
  Serial.print("Atual Data / Hora: ");                                                                  
  Serial.print(myRTC.dayofmonth);                                                                         
  Serial.print("/");                                                                                     
  Serial.print(myRTC.month);                                                                              
  Serial.print("/");                                                                                      
  Serial.print(myRTC.year);                                                                               
  Serial.print("  ");                                                                                     
  Serial.print(myRTC.hours);                                                                              
  Serial.print(":");                                                                                      
  Serial.print(myRTC.minutes);                                                                            
  Serial.print(":");                                                                                      
  Serial.println(myRTC.seconds);                                                                          
                                                                                                         
// Delay para o programa não ser impresso non-stop                                                          
  delay( 5000);                                                                                          
}                   
