#include <stdio.h>
#include <string.h>
#include <strings.h>

int posicao(char* item, char* nomes[], int size) {
  for (int i = 0; i < size; i++) {
    if (strcmp(item, nomes[i]) == 0) {
      return i;
    }
  }
  return -1;
}

int main() {
  int t;
  scanf("%d", &t);
  
  char* nomes[] = {"tesoura", "papel", "pedra", "lagarto", "Spock"};
  int size = sizeof(nomes) / sizeof(nomes[0]);
  
  for (int i = 1; i <= t; i++) {
    char s1[10], s2[10];
    scanf("%s %s", s1, s2);
    
    int a = posicao(s1, nomes, size);
    int b = posicao(s2, nomes, size);
    int c = (b - a + 5) % 5;
    
    char* resultado;
    if (c == 0) {
      resultado = "De novo";
    } else if (c % 2 == 1) {
      resultado = "Bazinga";
    } else {
      resultado = "Raj trapaceou";
    }
    
    printf("Caso #%d: %s!\n", i, resultado);
  }
  
  return 0;
}
