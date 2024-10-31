#include <stdio.h>
#include <string.h>

int main() {
  int C, F, i = 0;
  char N[50];
  char T[] = "Thor";

  scanf("%d", &C);

  while (i < C) {
    scanf("%s %d", N, &F);

    if (F >= 1 && F <= 25000) {
      if (strcmp(N, T) == 0) {
        printf("Y\n");
      } else {
        printf("N\n");
      }
    }

    i++;
  }

  return 0;
}
