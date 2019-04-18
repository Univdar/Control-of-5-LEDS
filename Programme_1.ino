/*
On utilise pour ce programme 5 LED
connectées sur les pins 2,3,4,5 et 6
*/

int pinLed[5]={2,3,4,5,6}; // Tableau listant les pins

int i=0;
void setup() {
  for (int i=0;i<5;i++)
  {
    pinMode(pinLed[i],OUTPUT);// Déclarer les leds comme sorties
    digitalWrite(pinLed[i],LOW);
  }
  
}

void loop() {

while (i<5) // Clignotement de gauche à droite
{
  digitalWrite(pinLed[i],HIGH); 
  delay(100);
  digitalWrite(pinLed[i],LOW); 
  delay(100);
  i++;  // incrementer le compteur i
}
while(i>1) // Clignotement inverse de droite à gauche
{
  digitalWrite(pinLed[i-2],HIGH); 
  delay(100);
  digitalWrite(pinLed[i-2],LOW); 
  delay(100);
  i--;  
  if (i==2)
  {
    i=0;
  }
}

}
