#include <stdio.h>

int buscaBinaria(int array[], int quantidade, int valor) {
    int inicio = 0;
    int fim = quantidade - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (array[meio] == valor) {
            return 1; // Retorna 1 se o valor for encontrado
        }

        if (array[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return 0; // Retorna 0 se o valor não for encontrado
}

int main() {
    // Lê os nossos dados de entrada:
    int quantidade;
    scanf("%d", &quantidade);
    int conteudos[quantidade];
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &conteudos[i]);
    }

    // Realiza a busca binária para encontrar o valor 777
    int encontrou = buscaBinaria(conteudos, quantidade, 777);

    // Imprime "S" se o valor 777 for encontrado, caso contrário, imprime "N"
    if (encontrou) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
