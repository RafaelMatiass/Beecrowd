#include <stdio.h>

void converter_idade(int dias) {
  int anos, meses, dias_restantes;

  anos = dias / 365;
  dias_restantes = dias % 365;

  meses = dias_restantes / 30;
  dias_restantes %= 30;

  int dias_finais = dias_restantes;

  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias_finais);
}

int main() {
  int idade_em_dias;

  scanf("%d", &idade_em_dias);
  converter_idade(idade_em_dias);

  return 0;
}
