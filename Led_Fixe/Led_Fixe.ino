// Définition de la constante
const int broche2 = 2; // Définition de la broche numéro 2.
int timer = 100;


// Fonction d'initialisation du programme
void setup() {
  pinMode(broche2, OUTPUT); // Intialisation de la broche numéro 2 (numérique).
}

// Fonction principale du programme
void loop() {
  digitalWrite(broche2, HIGH);   // Etat logique haut 1 (5 volts)
  delay(timer);
  digitalWrite(broche2, LOW);
  delay(timer);    
}
