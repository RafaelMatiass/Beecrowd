#include<stdio.h>

void imprimir_impares(int x);

int main(){
  int x;

  scanf("%d", &x);
  imprimir_impares(x);
}

void imprimir_impares(int x){
  int cont = 0, impares;

  while(cont < 12){

    if(x % 2 != 0){
      printf("%d\n", x);
    }
    x++;
    cont++;
  }
}