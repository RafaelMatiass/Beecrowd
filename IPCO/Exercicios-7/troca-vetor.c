#include <stdio.h>

int main() {
  int arr[20], arrInvert[20];

  for (int i = 0; i < 20; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < 20; i++) {
    arrInvert[19 - i] = arr[i]; 
  }

  for (int i = 0; i < 20; i++) {
    printf("N[%d] = %d\n", i, arrInvert[i]);
  }

  return 0;
}
