#include <stdio.h>

float calcular_litros(int gasto_hrs, int vm) {
  int litros;
  
  float dist = gasto_hrs * vm;
  return dist / 12.0;
}

int main() {
    int gasto_hrs, vm;
    float litros;

    scanf("%d", &gasto_hrs);
    scanf("%d", &vm);
    
    litros = calcular_litros(gasto_hrs, vm);
    printf("%.3f\n", litros);
    
    return 0;
}
