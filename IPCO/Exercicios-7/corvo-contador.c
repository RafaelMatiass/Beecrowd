#include <stdio.h>
#include <string.h>

int converterDecimal(char *piscada) {
  int decimal = 0;
  for (int i = 0; i < 3; i++) {
    decimal = decimal * 2 + (piscada[i] == '*' ? 1 : 0);
  }
  return decimal;
}

int main() {
  char input[10];
  int sum = 0;
  int qtdResultados = 0;
  int results[3] = {0};  

  while (qtdResultados < 3) {
    scanf("%s", input);

    if (strcmp(input, "caw") == 0) {
      scanf("%s", input); 
      results[qtdResultados] = sum;
      qtdResultados++;
      sum = 0;
    } else {
      sum += converterDecimal(input);
    }
  }

  for (int i = 0; i < 3; i++) {
    printf("%d\n", results[i]);
  }

  return 0;
}
