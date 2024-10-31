#include<stdio.h>

void operar_numeros();

int main(){
  operar_numeros();

  return 0;
}

void operar_numeros(){
  double x, soma = 0;
  int cont = 1;
  int qtd_positivos = 0;

  while(cont <= 6){
    scanf("%lf", &x);

    if(x > 0){
      soma += x;
      qtd_positivos++;
    }
    cont++;
  }

  printf("%d valores positivos\n", qtd_positivos);
  if (qtd_positivos > 0) {
    double media = soma / qtd_positivos;
    printf("%.1lf\n", media);
  }
  
}