//2.3 Projeto Display LCD- Texto Estático
#include <LiquidCrystal.h>
#define TEMPO_ATUALIZACAO 500

// Inicialização do display com os pinos: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  // Inicializa o LCD com 16 colunas e 2 linhas
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
}

lcd.print("Ola Curso:");
lcd.setCursor(0, 1);
// Limpa a tela
// Linha 0, coluna 0
// Linha 1, coluna 0
lcd.print("CITHA- IoT");
delay(TEMPO_ATUALIZACAO); // Aguarda meio segundO