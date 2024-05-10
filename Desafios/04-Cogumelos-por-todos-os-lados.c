#include <stdio.h>

int main() {
  int minutos, cogumelosColhidos;
  int taxaDeColheita = 1; // Agora a taxa de colheita é de 1 cogumelo a cada 3 minutos

  // Lê a quantidade de minutos disponíveis para colheita
  scanf("%d", &minutos);

  // Calcula a quantidade de cogumelos colhidos
  cogumelosColhidos = minutos / 3 * taxaDeColheita;

  // Imprime a quantidade de cogumelos colhidos
  printf("%d\n", cogumelosColhidos);

  return 0;
}
