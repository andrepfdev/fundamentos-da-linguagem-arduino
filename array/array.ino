// Array


void setup()
{
  Serial.begin(9600);
  
  int meuArray[5] = {1, 2, 3, 4, 5};
  
  Serial.println(meuArray[3]);
  
  meuArray[3] = 8;
  Serial.println(meuArray[3]);
}

void loop()
{
  // Código...  
}
