// do...while

int i = 0;

void setup()
{
  Serial.begin(9600);
  
  do {
  // bloco de comandos
    Serial.println(i);
    i++;
  } while (i <= 16);
  
}

void loop()
{
  //Código...
}