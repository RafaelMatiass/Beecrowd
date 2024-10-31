  #include<stdio.h>

  void imprimir_quadrado(int N);

  int main(){
    int N;
    scanf("%d", &N);

    if (N > 5 && N < 2000) {
      imprimir_quadrado(N);
    }
  }

  void imprimir_quadrado(int N){
    int cont = 1;

    while(cont <= N){
      if(cont % 2 == 0){
        printf("%d^2 = %d\n", cont, cont * cont);
      }
      cont++;
    } 
  }