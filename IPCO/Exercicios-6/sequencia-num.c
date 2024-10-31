#include <stdio.h>
#include <stdbool.h>

int main() {
    int M, N;
    bool siga = true;

    while (siga) {
      scanf("%d %d", &M, &N);

      if (M <= 0 || N <= 0) {
        return siga = false;
      }

      int menor, maior;

      if (M < N) {
        menor = M;
        maior = N;
      } else {
        menor = N;
        maior = M;
      }

      int soma = 0;

      for (int i = menor; i <= maior; i++) {
        printf("%d ", i);
        soma += i;
      }

      printf("Sum=%d\n", soma);
    }

    return 0;
}
