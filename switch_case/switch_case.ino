// switch...case

int sensorValor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{ 
  sensorValor = analogRead(A0);

  switch (sensorValor) {
    case 0 ... 100:
      Serial.println("Baixo");
      break;
    case 101 ... 500:
      Serial.println("Medio");
      break;
    case 501 ... 1023:
      Serial.println("Alto");
      break;
    default:
      Serial.println("Valor invalido");
  }
  delay(1000);

}