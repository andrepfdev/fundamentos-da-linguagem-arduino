void setup() {
  // Código...
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Código...

  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);  
  delay(1000);
}
