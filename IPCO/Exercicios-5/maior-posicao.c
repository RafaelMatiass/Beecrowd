#include <stdio.h>

#define TAM 100

int main() {
    int values[TAM];
    int i;
    int maior = 0;
    int pos = 0;

    for (i = 0; i < TAM; i++) {
      scanf("%d", &values[i]);
    }

    for (i = 0; i < TAM; i++) {
      if (values[i] > maior) {
        maior = values[i];
        pos = i + 1; 
      }
    }

    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}
