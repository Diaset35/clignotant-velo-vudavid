#include <LedControl.h>
LedControl matrice(12,11,10,1);



void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    matrice.shutdown(0, false);
    
    pinMode(7,INPUT);
    pinMode(8,INPUT);
    pinMode(9,INPUT);
   }


void loop() {
  // put your main code here, to run repeatedly:
    
    int boutongauche = digitalRead(7);
    int boutondroite = digitalRead(8);
    int boutonwarning = digitalRead(9);
    Serial.println(boutongauche);
    Serial.println(boutondroite);
    Serial.println(boutonwarning);
     if (boutongauche == 1){
        matrice.setLed(0, 1, 3, true);
        matrice.setLed(0, 2, 2, true);
        matrice.setLed(0, 2, 3, true);
        matrice.setLed(0, 3, 1, true);
        matrice.setLed(0, 3, 2, true);
        matrice.setLed(0, 3, 3, true);
        matrice.setLed(0, 3, 4, true);
        matrice.setLed(0, 3, 5, true);
        matrice.setLed(0, 3, 6, true);
        matrice.setLed(0, 4, 1, true);
        matrice.setLed(0, 4, 2, true);
        matrice.setLed(0, 4, 3, true);
        matrice.setLed(0, 4, 4, true);
        matrice.setLed(0, 4, 5, true);
        matrice.setLed(0, 4, 6, true);
        matrice.setLed(0, 5, 2, true);
        matrice.setLed(0, 5, 2, true);
        matrice.setLed(0, 6, 3, true);
        
        }
     if (boutongauche == 0){
        matrice.clearDisplay(0);  }
             if (boutondroite == 1){
        matrice.setLed(0, 1, 4, true);
        matrice.setLed(0, 2, 4, true);
        matrice.setLed(0, 2, 5, true);
        matrice.setLed(0, 3, 1, true);
        matrice.setLed(0, 3, 2, true);
        matrice.setLed(0, 3, 3, true);
        matrice.setLed(0, 3, 4, true);
        matrice.setLed(0, 3, 5, true);
        matrice.setLed(0, 3, 6, true);
        matrice.setLed(0, 4, 1, true);
        matrice.setLed(0, 4, 2, true);
        matrice.setLed(0, 4, 3, true);
        matrice.setLed(0, 4, 4, true);
        matrice.setLed(0, 4, 5, true);
        matrice.setLed(0, 4, 6, true);
        matrice.setLed(0, 5, 4, true);
        matrice.setLed(0, 5, 5, true);
        matrice.setLed(0, 6, 4, true);
        
        }
     if (boutondroite == 0){
        matrice.clearDisplay(0);  }
             if (boutonwarning == 1){
        matrice.setLed(0, 1, 3, true);
        matrice.setLed(0, 1, 4, true);
        matrice.setLed(0, 2, 2, true);
        matrice.setLed(0, 2, 3, true);
        matrice.setLed(0, 2, 4, true);
        matrice.setLed(0, 2, 5, true);
        matrice.setLed(0, 3, 2, true);
        matrice.setLed(0, 3, 5, true);
        matrice.setLed(0, 4, 1, true);
        matrice.setLed(0, 4, 2, true);
        matrice.setLed(0, 4, 5, true);
        matrice.setLed(0, 4, 6, true);
        matrice.setLed(0, 5, 1, true);
        matrice.setLed(0, 5, 2, true);
        matrice.setLed(0, 5, 3, true);
        matrice.setLed(0, 5, 4, true);
        matrice.setLed(0, 5, 5, true);
        matrice.setLed(0, 5, 6, true);
        
        
        }
     if (boutonwarning == 0){
        matrice.clearDisplay(0);  } 
}