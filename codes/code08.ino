/*
Código 08: controle de LED com potenciômetro.
*/

int POT = A1;
int LED = 9;
int valor = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  valor = analogRead(POT);
  if(valor > 0){
  analogWrite(LED, (valor/4));
  }
}
