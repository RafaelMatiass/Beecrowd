#include<stdio.h>

void imprimir_intervalo(int N);
int main(){
  int N;
  scanf("%d", &N);

  if(N > 0 && N < 10000){
    imprimir_intervalo(N);
  }
}

void imprimir_intervalo(int N){
  int cont = 0;
  int X, in = 0, out = 0;

  while(cont < N){
    scanf("%d", &X);

    if(X >= 10 && X <= 20){
      in++;
    }
    else {
      out++;
    }
    cont++;
  }

  printf("%d in\n", in);
  printf("%d out\n", out);
}