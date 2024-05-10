#include <stdio.h>

int main() {
  int capacidadeAtual, aumentoPercentual;
  float novaCapacidade;

  // Lê as entradas do usuário
  scanf("%d %d", &capacidadeAtual, &aumentoPercentual);

  // Calcula a nova capacidade total
  novaCapacidade = capacidadeAtual * (1 + aumentoPercentual / 100.0);

  // Imprime a nova capacidade total
  printf("%.0f\n", novaCapacidade);

  return 0;
}
