#include <stdio.h>

int main() {
  int N;
  int a = 0, b = 1, c;

  scanf("%d", &N);

  if (N != 1) {
      
    printf("0 1");

    for (int i = 2; i < N; i++) {
      c = a + b;
      printf(" %d", c);
      a = b;
      b = c;
    }

    printf("\n");
  }

  return 0;
}
