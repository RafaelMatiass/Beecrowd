#include <stdio.h>

int main() {
  int arr[15];
  int par[5], impar[5];
  int qtdPar = 0, qtdImpar = 0;

  for (int i = 0; i < 15; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 15; i++) {
    if (arr[i] % 2 == 0) {
      par[qtdPar++] = arr[i];

      if (qtdPar == 5) {
        for (int j = 0; j < 5; j++) {
          printf("par[%d] = %d\n", j, par[j]);
        }
        qtdPar = 0;  
      }
    } else {
      impar[qtdImpar++] = arr[i];

      if (qtdImpar == 5) {
        for (int j = 0; j < 5; j++) {
          printf("impar[%d] = %d\n", j, impar[j]);
        }
        qtdImpar = 0; 
      }
    }
  }

  for (int i = 0; i < qtdImpar; i++) {
    printf("impar[%d] = %d\n", i, impar[i]);
  }
  for (int i = 0; i < qtdPar; i++) {
    printf("par[%d] = %d\n", i, par[i]);
  }

  return 0;
}
