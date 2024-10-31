#include <stdio.h>

void imprimir_impar(int x);

int main() {
  int x;
    
  scanf("%d", &x);

  if(x > 0 && x <= 1000){
    imprimir_impar(x);
  }
    
  return 0;
}

void imprimir_impar(int x){
  int num = 1;

  while (num <= x) {
    if (num % 2 != 0) {
      printf("%d\n", num); 
    }
    num++; 
  }
}