#include <stdio.h>

double qual_intervalo(double a);

int main() {
  double a;

  scanf("%lf", &a);
  qual_intervalo(a);

  return 0;
}

double qual_intervalo(double a){

  if(a >= 0 && a <= 25.0000){
    printf("Intervalo [0,25]\n");
  }
  else if(a > 25.0000 && a <= 50.0000000){
    printf("Intervalo (25,50]\n");
  }
  else if(a > 50.0000000 && a <= 75.0000000){
    printf("Intervalo (50,75]\n");
  }
  else if(a > 75.0000000 && a <= 100.0000000){
    printf("Intervalo (75,100]\n");
  }
  else {
    printf("Fora de intervalo\n");
  }
}