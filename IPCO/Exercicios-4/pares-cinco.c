#include<stdio.h>

void imprimir_pares();

int main(){
  imprimir_pares();
}

void imprimir_pares(){
  int cont = 0, pares = 0, X;

  while(cont < 5){
    scanf("%d", &X);

    if(X % 2 == 0){
      pares++;
    }
    cont++;
  }

  printf("%d valores pares\n", pares);
}