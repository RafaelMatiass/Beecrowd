#include <stdio.h>

double calcularPontuacao(double grauDificuldade, double notas[]);

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    char nome[101];
    double grauDificuldade;
    double notas[7];

    scanf("%s", nome);
    scanf("%lf", &grauDificuldade);
    for (int j = 0; j < 7; j++) {
      scanf("%lf", &notas[j]);
    }

    double resultadoFinal = calcularPontuacao(grauDificuldade, notas);
    printf("%s %.2f\n", nome, resultadoFinal);
  }

  return 0;
}

double calcularPontuacao(double grauDificuldade, double notas[]) {
  double somaNotas = 0.0;
  double notaMaisAlta = notas[0];
  double notaMaisBaixa = notas[0];

  for (int j = 0; j < 7; j++) {
    if (notas[j] > notaMaisAlta) notaMaisAlta = notas[j];
    if (notas[j] < notaMaisBaixa) notaMaisBaixa = notas[j];
    somaNotas += notas[j];
  }

  somaNotas -= (notaMaisAlta + notaMaisBaixa);
  return somaNotas * grauDificuldade;
}