#include <stdio.h>

int calcular_pedido(int id, int qtd);

int main() {
  int id, qtd;
  
  scanf("%d %d", &id, &qtd);
  calcular_pedido(id, qtd);
  
  return 0;
}

int calcular_pedido(int id, int qtd){
    
  double preco, total;

  if (id == 1) {
    preco = 4.00;
  } else if (id == 2) {
    preco = 4.5;
  } else if (id == 3) {
    preco = 5.00;
  } else if (id == 4) {
    preco = 2.00;
  } else if (id == 5) {
    preco = 1.5;
  } else {
    printf("Código não existe.\n");
  }

  total = preco * qtd;

  printf("Total: R$ %.2f\n", total);
}