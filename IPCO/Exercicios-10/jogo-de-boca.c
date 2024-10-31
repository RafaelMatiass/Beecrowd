#include <stdio.h>

int main (){
  char string[150];
  int retorno = 0;
  unsigned short i;

  scanf("%s", string);

  for (i = 0; string[i]; ++i){
    retorno = ((retorno * 10) + (string[i] - '0')) % 3;
  }

  printf("%d\n", retorno);

  return 0;
}
