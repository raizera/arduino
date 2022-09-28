
int LED = 12;
int BOTAO = 2;
int valorEntrada = LOW;

void setup()
{
 pinMode(LED, OUTPUT);
 pinMode(BOTAO, INPUT);
}

void loop()
{
 valorEntrada = digitalRead(BOTAO);
  if (valorEntrada == HIGH){
  digitalWrite(LED, LOW);
  }
  else{
  digitalWrite(LED, HIGH);
  }
  delay(100);
}
