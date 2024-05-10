#include <stdio.h>

int main() {
  int temperatura;
  scanf("%d", &temperatura);
  
  // Verifica a temperatura e imprime a mensagem correspondente
  if (temperatura <= 15) {
    printf("Baixa\n");
  } else if (temperatura >= 26) {
    printf("Alta\n");
  } else {
    printf("Ideal\n");
  }
  
  return 0;
}
