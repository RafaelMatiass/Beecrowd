#include <stdio.h>

void calcular_soma(int x, int y);

int main() {
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);

  calcular_soma(x, y);

  return 0;
}

void calcular_soma(int x, int y) {
  int soma = 0;

  if (x > y) {
    int temp = x;
    x = y;
    y = temp;
  }
  x++;
  
  while (x < y) {
    if (x % 2 != 0) {
      soma += x;
    }
    x++;
  }

  printf("%d\n", soma);
}
