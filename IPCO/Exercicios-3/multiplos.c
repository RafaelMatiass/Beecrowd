#include <stdio.h>
#include <math.h>

void multiplos(int a, int b);

int main() {
  int a, b;

  scanf("%d %d", &a, &b);
  multiplos(a, b);

  return 0;
}

void multiplos(int a, int b) {

  if (a % b == 0 || b % a == 0) {
    printf("Sao Multiplos\n");
  } else {
    printf("Nao sao Multiplos\n");
  }
}
