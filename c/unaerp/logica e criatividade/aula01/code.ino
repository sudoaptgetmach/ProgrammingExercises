/*
  Código desafio proposto pelo professor que faz o led a cada 2ms por duas vezes e, após, piscar mais duas vezes a cada 1 segundo. 
*/
void setup()
{
  pinMode(13, OUTPUT);
  
  for (int i = 1; i <= 2; i++) {
  	digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
  }

  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop()
{
  
}
