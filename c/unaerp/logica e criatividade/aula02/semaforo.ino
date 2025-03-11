/* Desafio de semáforo proposto pelo professor. */

int ledVermelho = 12;
int ledAmarelo = 11;
int ledVerde = 10;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  vermelho();
  delay(5000);
  
  atencao();
  delay(2000);

  verde();
  delay(5000);
  
  atencao();
  delay(2000);
  
  vermelho();
  delay(5000);
}

void vermelho() {
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho, HIGH); 
}

void atencao() {
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
}

void verde() {
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH); 
}
