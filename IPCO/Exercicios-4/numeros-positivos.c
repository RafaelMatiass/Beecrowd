#include<stdio.h>

void imprimir_intervalo();

int main(){
  imprimir_intervalo();
}

void imprimir_intervalo(){
  int cont = 0, positivo = 0;
  float X;

  while(cont < 6){
    scanf("%f", &X);

    if(X > 0 && X != 0){
      positivo++;
    }
    cont++;
  }

  printf("%d valores positivos\n", positivo);
}