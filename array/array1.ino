// Array


void setup()
{
  Serial.begin(9600);
  
  //int idade[3];
  
  int nArray[5] = {2, 3, 5, 7, 9};
  
  String wArray[3] = {"Amanda", "Milena", "Ana"};
  
  //Serial.println(nArray[3]);
  
  wArray[2] = "Pedro";
  
  Serial.println(wArray[2]);
 
}

void loop()
{
  // Código...  
}
