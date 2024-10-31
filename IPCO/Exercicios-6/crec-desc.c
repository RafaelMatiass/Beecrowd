#include <stdio.h>

int main(){
  int x, y;
  while (x > y || x < y) {
    scanf("%d %d", &x, &y);

    if (x > y){
      printf("Decrescente\n");
    }
    if (x < y){
      printf("Crescente\n");
    }
  } 
  return 0;
}