#include<stdio.h>

void imprimir_mensagem_valor(int qtd);

int main(){
  int qtd;
  scanf("%d", &qtd);
  imprimir_mensagem_valor(qtd);

  return 0;
}

void imprimir_mensagem_valor(int qtd){
  int x;

  while(qtd > 0){
    
    scanf("%d", &x);
    
    if (x == 0) {
      printf("NULL\n");
    } else {
      if (x % 2 == 0) {
        printf("EVEN ");
      } else {
        printf("ODD ");
      }

      if (x > 0) {
        printf("POSITIVE\n");
      } else {
        printf("NEGATIVE\n");
      }
    }
    qtd--;
  }
}