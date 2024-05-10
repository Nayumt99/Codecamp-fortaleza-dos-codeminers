#include <stdio.h>
#include <stdlib.h>

void insertionSort(int reliquias[], int quantidade) {
  for (int i = 1; i < quantidade; i++) {
    int chave = reliquias[i];
    int j = i - 1;
    while (j >= 0 && reliquias[j] > chave) {
      reliquias[j + 1] = reliquias[j];
      j = j - 1;
    }
    reliquias[j + 1] = chave;
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int reliquias[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", &reliquias[i]);
  }

  // Executa o algoritmo "insertionSort" para ordenar as "reliquias".
  insertionSort(reliquias, quantidade);

  // Imprime as "reliquias" ordenadas
  for (int i = 0; i < quantidade; i++) {
    printf("%d ", reliquias[i]);
  }
  return 0;
}
