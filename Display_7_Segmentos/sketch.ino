//2.2 Projeto Display 7 segmentos
#include "SevSeg.h" // Importa a biblioteca que abstrai o controle do display de 7 segmentos
SevSeg setSeg; // Cria um objeto (instância) da biblioteca para comandar o display

void setup()
{
  byte numDigitos = 1; // Quantidade de dígitos do display (aqui é 1 dígito)
  byte digitPinos[] = {}; // Pinos "comuns" usados em displays com vários dígitos (multiplexação).
  // Como é 1 dígito, fica vazio.
  
  // Mapeia os pinos do Arduino para os segmentos do display NA ORDEM: A, B, C, D, E, F, G, DP
  byte pinosDisplay[] = {3, 2, 8, 7, 6, 4, 5, 9};
  bool resistoresSegmentos = true; // 'true' indica que os resistores estão em cada segmento (recomendado)
  
  // Inicializa a biblioteca: tipo do display (cátodo comum), no de dígitos, pinos de dígitos, pinos de segmentos, resistores
  setSeg.begin(COMMON_CATHODE, numDigitos, digitPinos, pinosDisplay, resistoresSegmentos);
  setSeg.setBrightness(90); // Define o brilho (duty cycle de multiplexação). Escala –0100. Aqui ~90%
}

void loop()
{
  // Mostra os números de 0 a 9, trocando a cada 2 segundos
  for (int i = 0; i < 10; i++)
  {
    setSeg.setNumber(i); // Define o número a exibir
    setSeg.refreshDisplay(); // Atualiza o display (deve ser chamada com frequência; em projetos maiores, chamar continuamente)
    delay(2000); // Mantém o dígito visível por 2 s antes de avançar
  }
}
