#include <stdio.h>

int main() {
  char operacao;
  double matriz[12][12];
  double soma = 0.0;
  int elementos = 0;

  scanf("%c", &operacao);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%lf", &matriz[i][j]);
    }
  }

  for (int i = 1; i < 12; i++) {
    for (int j = 0; j < i; j++) {
      soma += matriz[i][j];
      elementos++;
    }
  }

  if (operacao == 'S') {
    printf("%.1lf\n", soma);
  } else if (operacao == 'M') {
    printf("%.1lf\n", soma / elementos);
  }

  return 0;
}