//c++
// programa que envia sinal alto para a saida 6, aguarda 2s e envia sinal baixo para saida 6

void setup() {
  // put your setup code here, to run once:

  pinMode (6, OUTPUT); //declarar portas
  }

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite (6, HIGH); // acende a led 
 delay (2000); // tempo que vai esperar
 digitalWrite (6, LOW); // apaga a led
 delay (2000);
}
