/*
SEGUNDO CÓDIGO

LIGAR LED EXTERNO

O código é o mesmo que para o caso do LED da placa

Precisaremos apenas inserir um LED no pino 13.

*/

int LED = 13;

void setup() {
pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
