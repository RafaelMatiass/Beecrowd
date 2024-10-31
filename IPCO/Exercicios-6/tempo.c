#include <stdio.h>

int main() {
    int n, tempo;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
      scanf("%d", &tempo);

      if (tempo < 2015) {
        printf("%d D.C.\n", 2015 - tempo);
      } else {
        printf("%d A.C.\n", tempo - 2014);
      }
    }
    
  return 0;
}
