#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[]) {
  int comprimento = strlen(palavra);
  int i, j;
  char temp;

  // Percorre a metade da string e troca os caracteres de posição
  for (i = 0, j = comprimento - 1; i < j; i++, j--) {
    temp = palavra[i];
    palavra[i] = palavra[j];
    palavra[j] = temp;
  }
}

int main() {
  char palavra[100];

  // Lê a palavra a ser invertida do usuário.
  scanf("%s", palavra);

  // Chama a função que inverte a palavra.
  inverter(palavra);

  // Imprime a palavra invertida na tela.
  printf("%s", palavra);

  return 0;
}
