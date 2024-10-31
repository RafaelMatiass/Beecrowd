#include <stdio.h>

void calcularPorcentual(int totalS, int totalB, int totalA, int totalS1, int totalB1, int totalA1, float percentuais[]);

int main() {
  int N;
  int S, B, A, S1, B1, A1;
  int totalS = 0, totalB = 0, totalA = 0;
  int totalS1 = 0, totalB1 = 0, totalA1 = 0;
  char nome[50];
  float percentuais[3] = {0};

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%s", nome);
    scanf("%d %d %d", &S, &B, &A);
    scanf("%d %d %d", &S1, &B1, &A1);

    if (S >= 0 && S <= 10000 && B >= 0 && B <= 10000 && A >= 0 && A <= 10000) {
      if (S1 >= 0 || S1 <= S || B1 >= 0 || B1 <= B || A1 >= 0 || A1 <= A) {
        totalS += S;
        totalB += B;
        totalA += A;
        totalS1 += S1;
        totalB1 += B1;
        totalA1 += A1;
      }
      else {
        i = N;
      }
    }
    else {
      i = N;
    }
  }

  calcularPorcentual(totalS, totalB, totalA, totalS1, totalB1, totalA1, percentuais);

  printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n", percentuais[0], percentuais[1], percentuais[2]);

  return 0;
}

void calcularPorcentual(int totalS, int totalB, int totalA, int totalS1, int totalB1, int totalA1, float percentuais[]) {  
  percentuais[0] = (100.0 * totalS1) / totalS;
  percentuais[1] = (100.0 * totalB1) / totalB;
  percentuais[2] = (100.0 * totalA1) / totalA;

}
