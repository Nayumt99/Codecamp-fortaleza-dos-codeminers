#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int array[], int inicio, int fim) {
    int pivot = array[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (array[j] <= pivot) {
            i++;
            trocar(&array[i], &array[j]);
        }
    }

    trocar(&array[i + 1], &array[fim]);
    return i + 1;
}

void quickSort(int array[], int inicio, int fim) {
    if (inicio < fim) {
        int indicePivo = particionar(array, inicio, fim);

        quickSort(array, inicio, indicePivo - 1);
        quickSort(array, indicePivo + 1, fim);
    }
}

int main() {
    // Lê os nossos dados de entrada:
    int quantidade;
    scanf("%d", &quantidade);
    int joias[quantidade];
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &joias[i]);
    }

    // Executa o algoritmo "quickSort" para ordenar as "joias".
    quickSort(joias, 0, quantidade - 1);

    // Imprime as "joias" ordenadas.
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", joias[i]);
    }

    return 0;
}
