/*
produzindo som com arduino

itens:
> 1 Arduino
> 1 buzzer
> 1 resistor 220 ohms (vermelho | vermelho | marrom) ou 330 ohms (laranja | laranja | marrom)
> 1 protoboard
> jumper cable
*/

int buzzer = 8;

void setup()
{
pinMode(buzzer, OUTPUT);
}

void loop()
{
  tone(buzzer, 1200);	// 1200 é a frequência do som.
  delay(1000);
  noTone(buzzer);
  delay(1000);			// desliga o buzzer.
}
