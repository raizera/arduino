/*
TERCEIRO CÓDIGO

LIGAR LED EXTERNO COM RESISTOR

O código é o mesmo que para o caso do LED EXTERNO sem resistor.
Precisaremos apenas inserir um LED no pino 13, mas agora com um resistor externo.
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
