// C++ code
//

const int vermelho = 12;
const int amarelo = 11;
const int verde = 10;
const int switchPin = 8;
const int soilPin = A0;

int switchState = 0;
int soilState = 0;

void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(soilPin, INPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  if (digitalRead(switchPin))
    detector(analogRead(soilPin));
  else
    desligarLeds();
}

void detector(int n) {
  desligarLeds();
  
  if (n > 584)
    digitalWrite(verde, HIGH);
  else if (n > 292)
    digitalWrite(amarelo, HIGH);
  else
    digitalWrite(vermelho, HIGH);
}

void desligarLeds() {
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
}
