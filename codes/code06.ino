/*
Código 06: liga-desliga com botão
*/

int LED = 12;
int BOTAO = 2;
int estadoLED = 0;

void setup()
{
 pinMode(LED, OUTPUT);
 pinMode(BOTAO, INPUT);
}

void loop(){
  if (digitalRead(BOTAO) == HIGH){ 

    if(estadoLED == 0)

      estadoLED = 1;

    else

   }
  
  if(estadoLED == 0)

  digitalWrite(LED, LOW);
  
  if(estadoLED == 1)

  digitalWrite(LED, HIGH);
  delay(100);
}
