#include <stdio.h>

void calcular_cobaias(int n);

int main() {
  int n;
  scanf("%d", &n);
  calcular_cobaias(n);
  return 0;
}

void calcular_cobaias(int n) {
  int totalCobaias = 0;
  int totalCoelhos = 0;
  int totalRatos = 0;
  int totalSapos = 0;

  for (int i = 0; i < n; i++) {
    int quantia;
    char tipo;
    scanf("%d %c", &quantia, &tipo);

    totalCobaias += quantia;
    if (tipo == 'C') {
        totalCoelhos += quantia;
    } else if (tipo == 'R') {
        totalRatos += quantia;
    } else if (tipo == 'S') {
        totalSapos += quantia;
    }
  }

  printf("Total: %d cobaias\n", totalCobaias);
  printf("Total de coelhos: %d\n", totalCoelhos);
  printf("Total de ratos: %d\n", totalRatos);
  printf("Total de sapos: %d\n", totalSapos);

  if (totalCobaias > 0) {
    printf("Percentual de coelhos: %.2f %%\n", (totalCoelhos * 100.0) / totalCobaias);
    printf("Percentual de ratos: %.2f %%\n", (totalRatos * 100.0) / totalCobaias);
    printf("Percentual de sapos: %.2f %%\n", (totalSapos * 100.0) / totalCobaias);
  }
}
