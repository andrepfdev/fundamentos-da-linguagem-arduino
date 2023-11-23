// Operadores de Comparação

int a = 5;
int b = 3;

void setup()
{
  Serial.begin(9600);
 
 // diferente de '!='
 bool diferente = a != b;
 
 // menor que '<'
 bool menor = a < b;
  
 // maior que '>'
 bool maior = a > b;
  
 // menor que ou igual a '<='
 bool menorIgual = a <= b;
  
 // maior que ou igual a '>='
 bool maiorIgual = a >= b;
  
 // igual a '=='
 bool igual = a == b;
  
  
  Serial.println(diferente);
  Serial.println(menor);
  Serial.println(maior);
  Serial.println(menorIgual);
  Serial.println(maiorIgual);
  Serial.println(igual);
}

void loop()
{
}









