// C++ code
//

const int verde = 11;
const int vermelho = 12;

const int roxo = A0;
const int azul = A1;
const int turquesa = A2;

int input1 = 0; // A0 roxo
int input2 = 0; // A1 azul
int input3 = 0; // A2 turquesa

void setup()
{
  pinMode(roxo, INPUT);
  pinMode(azul, INPUT);
  pinMode(turquesa, INPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop()
{
 input1 = map(analogRead(roxo), 0, 1023, 0, 9);
 input2 = map(analogRead(azul), 0, 1023, 0, 9);
 input3 = map(analogRead(turquesa), 0, 1023, 0, 9);
  
  if (input1 == 4 && input2 == 5 && input3 == 6) {
  	digitalWrite(verde, HIGH); 
	digitalWrite(vermelho, LOW); 
  } else {
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, HIGH);
  }
}
