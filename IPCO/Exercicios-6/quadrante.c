#include <stdio.h>

int main() {
  int x, y, parada = 1;

  while (parada == 1) {
    scanf("%d %d", &x, &y);
    
    if (x == 0 || y == 0) {
      parada++;
    }

    if (x > 0 && y > 0) {
      printf("primeiro\n");
    } else if (x < 0 && y > 0) {
      printf("segundo\n");
    } else if (x < 0 && y < 0) {
      printf("terceiro\n");
    } else if (x > 0 && y < 0) {
      printf("quarto\n");
    }
  }
  
  return 0;
}