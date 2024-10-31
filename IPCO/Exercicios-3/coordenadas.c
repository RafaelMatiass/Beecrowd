#include <stdio.h>

float qual_quadrante(float x, float y);

int main() {
  float x, y;
  scanf("%f %f", &x, &y);
  qual_quadrante(x, y);
  
  return 0;
}

float qual_quadrante(float x, float y){
  if (x == 0.0 && y == 0.0) {
    printf("Origem\n");
  } else if (x == 0.0) {
    printf("Eixo Y\n");
  } else if (y == 0.0) {
    printf("Eixo X\n");
  } else if (x > 0.0 && y > 0.0) {
    printf("Q1\n");
  } else if (x < 0.0 && y > 0.0) {
    printf("Q2\n");
  } else if (x < 0.0 && y < 0.0) {
    printf("Q3\n");
  } else if (x > 0.0 && y < 0.0) {
    printf("Q4\n");
  }
}