void setup() {
   
  pinMode(LED_BUILTIN, OUTPUT);
}

// melhor baile de favela, melhor baile da cidade (acho q tá piscando rapidão) 
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(100);                       
  digitalWrite(LED_BUILTIN, LOW);   
  delay(100);                       
  }