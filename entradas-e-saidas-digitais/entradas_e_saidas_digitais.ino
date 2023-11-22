// C++ code
//
void setup()
{
  pinMode(13, OUTPUT); // CONFIGURA O USO DO PINO
  // INPUT = entrada
  // OUTPUT = saída
}

void loop()
{
  digitalWrite(13, HIGH);
  //HIGH = ligado
  delay(1000); // Espera por 1 segundo
  digitalWrite(13, LOW);
  //LOW = desligado  
  delay(1000);
}