#include<stdio.h>

double calcular_imposto(double salario);

int main(){
  double salario;
  scanf("%lf", &salario);
  calcular_imposto(salario);

  return 0;
}

double calcular_imposto(double salario){
  
  double imposto;

  if (salario <= 2000.00) {
    printf("Isento\n");
  } else if (salario <= 3000.00) {
    imposto = (salario - 2000.00) * 0.08;
    printf("R$ %.2lf\n", imposto);
  } else if (salario <= 4500.00) {
    imposto = (salario - 3000.00) * 0.18 + 1000.00 * 0.08;
    printf("R$ %.2lf\n", imposto);
  } else {
    imposto = (salario - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08;
    printf("R$ %.2lf\n", imposto);
  }

}