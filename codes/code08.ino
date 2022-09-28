/*
Código 08: controle de LED com potenciômetro.
*/

int POT = A1;
int LED = 9;
int valor = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
  valor = analogRead(POT);
  digitalWrite(LED, HIGH);
  delay(valor);
  digitalWrite(LED, LOW);
  delay(valor);
}
