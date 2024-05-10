#include<stdio.h>
#include<stdlib.h>

void trocar(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void bubbleSort(int array[], int quantidade){ 
  for (int i = 0; i < quantidade - 1; i++) {
    for (int j = 0; j < quantidade - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        trocar(&array[j], &array[j + 1]);
      }
    }
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int frascos[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &frascos[i]);
  }
  
  // Executa o algoritmo "bubbleSort" para ordenar os "frascos".
  bubbleSort(frascos, quantidade);
  
  // Imprime os "frascos" ordenados.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", frascos[i]);
  }
  
  return 0;
}
