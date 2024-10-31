#include <stdio.h>

void imprimir_par(int num);

int main() {
  int num = 1;
    
  imprimir_par(num);
    
  return 0;
}

void imprimir_par(int num){
    
  while (num <= 100) {
    if (num % 2 == 0) {
      printf("%d\n", num); 
    }
    num++; 
  }
}