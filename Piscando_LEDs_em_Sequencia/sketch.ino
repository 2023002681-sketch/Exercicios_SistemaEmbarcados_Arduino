//2.0.1 Projeto Piscando LEDs em Sequência

// Array com os números dos pinos digitais conectados aos LEDs
int leds[] = {8, 9, 10, 11};
// Variável para controle do índice do LED
int contador = 0;
// Tempo em milissegundos para manter cada LED ligado ou desligado
int timer = 150;
void setup() {
// Configura todos os pinos definidos no array 'leds' como saídas
  for (contador = 0; contador < 4; contador++) {
    pinMode(leds[contador], OUTPUT); // Define o pino como saída
  }
}
void loop() {
  // Percorre cada LED do array, ligando e desligando em sequência
  for (contador = 0; contador < 4; contador++) {
    digitalWrite(leds[contador], HIGH); // Liga o LED atual
    delay(timer); // Espera o tempo definido no timer
    digitalWrite(leds[contador], LOW); // Desliga o LED atual
    delay(timer); // Espera novamente antes de passar ao próximo LED
  }
}