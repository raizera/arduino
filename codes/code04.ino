/*
 QUARTO CÓDIGO

 CONTROLAR O LED COM UM BOTÃO
 
OBS:. o Resistor do push button vale 10k.
*/

const int BUTTON = 8;
const int LED = 12;
int BUTTONstate = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  BUTTONstate = digitalRead(BUTTON); //aqui é definida uma variável que receberá o estado atual lido pelo botão (pressionado ou não pressionado).
  if (BUTTONstate == HIGH)  //botão pressionado = led ligado
  {
    digitalWrite(LED, HIGH);
  } 
  else{                     //botão não pressionado = led desligado
    digitalWrite(LED, LOW);
  }
}
