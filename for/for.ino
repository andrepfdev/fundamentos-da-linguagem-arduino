// for

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < 15; i++){
  	Serial.println(i);
    delay(1000);
  }
}