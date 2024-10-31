#include <stdio.h>

int main(){
  int x, y, temp;
  int soma = 0;

  scanf("%d\n %d", &x, &y);

  if (y > x){
    temp = y;
    y = x;
    x = temp;
  }

  for (int i = y; i <= x; i++){
    if (i % 13 != 0){
      soma += i;
    }
  }

  printf("%d\n", soma);
}