#include <stdio.h>

float lerNota() {
  float nota, encerre = 1;
  while (encerre == 1) {
    scanf("%f", &nota);
    if (nota >= 0.0 && nota <= 10.0) {
      encerre++;
    } else {
      printf("nota invalida\n");
    }
  }
  return nota;
}

int main() {
  float nota1, nota2, media;
  int opcao;

  do {
    nota1 = lerNota();
    nota2 = lerNota();

    media = (nota1 + nota2) / 2.0;
    printf("media = %.2f\n", media);

    do {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &opcao);
    } while (opcao != 1 && opcao != 2);

  } while (opcao == 1);

  return 0;
}
