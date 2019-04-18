/*
On utilise pour ce programme 5 LED
connectées sur les pins 2,3,4,5 et 6
*/

int pinLed[5]={2,3,4,5,6}; // Tableau listant les pins
//Tableau à double entrée listant l’état (booléen 1 allumé, 0 éteint) des LED à chaque séquence
boolean affichage[8][5]={
  1,0,0,0,0,
  0,1,0,0,0,
  0,0,1,0,0,
  0,0,0,1,0,
  0,0,0,0,1,
  0,0,0,1,0,
  0,0,1,0,0,
  0,1,0,0,0};
int i=0;
void setup() {
  for (int i=0;i<5;i++)
  {
    pinMode(pinLed[i],OUTPUT);// Déclarer les leds comme sorties
    digitalWrite(pinLed[i],LOW);
  }
  
}

void loop() {
// L'utilisation des tableaux
  for (int i=0;i<8;i++) // boucle de séquence d'affichage
  {
    for (int p=0;p<5;p++) // boucle pour chaque pin
    {
      boolean etat=affichage[i][p]; // on va chercher l'état pour le pin
      digitalWrite(pinLed[p],etat); // on met le pin concerné à l'état
    }
    //tous les pins sont dans l'état de la séquence en cours
    delay(100); //petite pause d'affichage
    // on passe à la séquence suivante
  }
  // fin des séquences et on repart au début de la loop()

}
