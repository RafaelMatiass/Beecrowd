#include <stdio.h>

float consumo_medio(int distancia, float combustivel) {
    
  float consumo;
  consumo = distancia / combustivel;

  return consumo;
}

int main() {
    int distancia;
    float combustivel, consumo;

    scanf("%d", &distancia);
    scanf("%f", &combustivel);
    
    consumo = consumo_medio(distancia, combustivel);
    printf("%.3f km/l\n", consumo);
    
    return 0;
}
