// If e Else

int nota = 3;

void setup()
{
  Serial.begin(9600);
  
  if(nota >= 7){
  	Serial.println("Aluno aprovado!");
  } else {
  	Serial.println("Aluno reprovado. Sinto muito.");
  }
  
}

void loop()
{
}