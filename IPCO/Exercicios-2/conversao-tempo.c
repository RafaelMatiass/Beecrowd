#include <stdio.h>

void converter_tempo(int segundos) {
  int horas, minutos, seg;

  horas = segundos / 3600;
  segundos %= 3600;

  minutos = segundos / 60;
  segundos %= 60;

  seg = segundos;

  printf("%d:%01d:%01d\n", horas, minutos, seg);
}

int main() {
  int tempo_em_segundos;

  scanf("%d", &tempo_em_segundos);
  converter_tempo(tempo_em_segundos);

  return 0;
}
