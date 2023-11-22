// C++
// Declaração de variáveis

//tipo nome = valor;
const int var = 10; // Variável global

void setup() {

  Serial.begin(9600);
}

void loop() {
  int varLocal = 15;// Variável local

  //var = 5;
  Serial.println(var);

}
