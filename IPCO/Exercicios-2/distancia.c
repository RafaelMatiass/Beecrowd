#include <stdio.h>

int calcular_distancia(int distancia) {
  return distancia * 2;
}

int main() {
    int distancia, distancia_total;

    scanf("%d", &distancia);
    
    distancia_total = calcular_distancia(distancia);
    printf("%d minutos\n", distancia_total);
    
    return 0;
}
