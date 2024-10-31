#include <stdio.h>
#include <math.h>

void calcular_hr(int a, int b);

int main() {
  int a, b;

  scanf("%d %d", &a, &b);
  calcular_hr(a, b);

  return 0;
}

void calcular_hr(int a, int b) {

  int min_inicial, min_final, duracao, duracao_total;

  min_inicial = a * 60;
  min_final = b * 60;

  if (min_final <= min_inicial) {
    duracao = (min_final + 24 * 60) - min_inicial;
  } else {
    duracao = min_final - min_inicial;
  }

  duracao_total = duracao / 60;

  printf("O JOGO DUROU %d HORA(S)\n", duracao_total);
}
