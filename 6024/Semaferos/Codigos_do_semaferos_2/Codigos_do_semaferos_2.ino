int verde = 8;
int vermelho = 9;
int azul = 10;
int branco = 11; 

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(branco, OUTPUT);
}

void loop(){
  
  digitalWrite(vermelho, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(branco, LOW);
  digitalWrite(verde, HIGH);
  delay (1000);

  digitalWrite(vermelho, HIGH);
  digitalWrite(azul, LOW);
  digitalWrite(branco, LOW);
  digitalWrite(verde, LOW);
  delay (1000);

  digitalWrite(vermelho, LOW);
  digitalWrite(azul, HIGH);
  digitalWrite(branco, LOW);
  digitalWrite(verde, LOW);
  delay (1000);

  digitalWrite(vermelho, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(branco, HIGH);
  digitalWrite(verde, LOW);
  delay (1000);

}
  