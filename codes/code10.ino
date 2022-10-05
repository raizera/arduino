/*
produzindo som com arduino - notas musicais
itens:
> 1 Arduino
> 1 buzzer
> 1 resistor 220 ohms (vermelho | vermelho | marrom) ou 330 ohms (laranja | laranja | marrom)
> 1 protoboard
> jumper cable
*/

int buzzer = 8;
int numNotas = 10;

int notas[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440}

/*
261 = C
277 = C#
294 = D
311 = D#
330 = E
349 = F
370 = F#
392 = G
415 = G#
440 = A
------------------------
C = Dó
D = Ré
E = Mi
F = Fá
G = Sol
A = Lá
B = Si
------------------------
# -> notas sustenidas
sem # -> notas fundamentais (naturais)
*/

void setup()
{
pinMode(buzzer, OUTPUT);
}

void loop()
{
  for(int i = 0; i < numNotas; i++){
  tone(buzzer, notas[i]);
    delay(500);
  }
  noTone(buzzer);
}

/*
Este circuito consiste apenas em um Arduino, um alto-falante e um resistor
O resistor, em série com o alto-falante, é muito importante para limitar a corrente que circulará no circuito,
pois os pinos do Arduino só podem fornecer no máximo 40 mA, e se uma corrente maior do que isso for exigida,
poderá ocasionar danos ao seu microcontrolador.

O valor do resistor pode ser calculado usando-se a Lei de Ohm. Sabemos que R = U / I,
sendo que o valor da tensão fornecida pelo Arduino é de 5V, e a corrente máxima, como citado,
é de 40mA. Portando, o valor mínimo do resistor deverá ser:

R = 5 / 0,04 = 125Ω
Como o alto-falante possui resistência interna, geralmente de 8Ω, então o resistor em série precisará ter,
na verdade, 125Ω – 8Ω = 117Ω. Este valor não existe comercialmente,
de modo que teremos de usar o valor mais próximo encontrado no mercado, que é de 150Ω.
[http://www.bosontreinamentos.com.br/eletronica/arduino/tocando-notas-musicais-com-o-arduino/]
*/
