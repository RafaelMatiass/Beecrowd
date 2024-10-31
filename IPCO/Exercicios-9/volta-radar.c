#include <stdio.h>

int main() {
  int t, somaPedidos = 0;

  scanf("%d", &t);

  while (t > 0) {
    for (int i = 1; i <= t; i++) {
      int n;
      scanf("%d", &n);

      if (n % 2 == 0) {
        somaPedidos = 2 * n - 2;
        printf("%d\n", somaPedidos);
      } else {
        somaPedidos = (n / 2) * 4 + 1;
        printf("%d\n", somaPedidos);
      }
    }

    scanf("%d", &t);
  }

  return 0;
}
