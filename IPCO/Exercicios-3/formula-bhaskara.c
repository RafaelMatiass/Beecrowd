#include <stdio.h>
#include <math.h>

void calcular_bhaskara(double a, double b, double c);

int main() {
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);
  calcular_bhaskara(a, b, c);

  return 0;
}

void calcular_bhaskara(double a, double b, double c) {
  double delta, x1, x2;

  delta = b * b - 4 * a * c;

  if (a == 0 || delta < 0) {
    printf("Impossivel calcular\n");
  } else {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
  }
}
