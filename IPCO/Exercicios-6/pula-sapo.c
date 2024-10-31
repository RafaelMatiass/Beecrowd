#include <stdio.h>
#include <stdbool.h>

int main() {
  int P, N;
  int alt, alt_ant;
  bool win = true;

  scanf("%d %d", &P, &N);

  scanf("%d", &alt_ant);

  for(int i = 1; i < N; i++) {
    scanf("%d", &alt);

    if(alt > alt_ant + P || alt < alt_ant - P) {
      win = false;
      i = N;
    }

    alt_ant = alt;
  }

  if(win) {
    printf("YOU WIN\n");
  } else {
    printf("GAME OVER\n");
  }

  return 0;
}
