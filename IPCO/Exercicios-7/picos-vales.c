#include <stdio.h>

int main() {
  int N;
  int tem_padrao = 1; 
  int pico;

  scanf("%d", &N);
  int arr[N];

  if (N > 1 && N <= 100) {
    for (int i = 0; i < N; i++) {
      scanf("%d", &arr[i]);
    }

    pico = arr[1] > arr[0];

    for (int i = 1; i < N; i++) {
      if (pico) {
        if (arr[i] <= arr[i - 1]) {
          tem_padrao = 0; 
          i = N;
        }
      } else {
        if (arr[i] >= arr[i - 1]) {
          tem_padrao = 0; 
          i = N;
        }
      }
      pico = !pico;
    }
  } else {
    tem_padrao = 0; 
  }

  printf("%d\n", tem_padrao);

  return 0;
}
