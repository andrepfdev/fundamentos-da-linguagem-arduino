// Declaração de funções

void setup() {
  // Código...
  Serial.begin(9600);

}

void loop() {
  // Código...
  int resultado = soma(2, 6);
  Serial.println(resultado);
  //bomDia();
}

// Funções sem retorno 
void bomDia() {
  String msg = "Bom dia";
  Serial.println(msg);
}


// Funções com retorno
int soma(int a, int b) {
  return a + b;
}

















