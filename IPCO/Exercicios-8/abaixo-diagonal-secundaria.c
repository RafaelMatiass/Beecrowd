#include <stdio.h>

int main() {
  double matriz[12][12];
  char operacao;
  double soma = 0.0;
  int elementos = 0;

  scanf("%c", &operacao);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      if (i + j > 11) {
        soma += matriz[i][j];
        elementos++;
      }
    }
  }

  if (operacao == 'M') {
    soma /= elementos;
  }

  printf("%.1lf\n", soma);

  return 0;
}
