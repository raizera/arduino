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


/*
A função tone() pode receber dois ou três parâmetros,
de modo que o terceiro é o tempo de duração do sinal sonoro.
Faça o teste mudando o código (altere a função tone).
*/
