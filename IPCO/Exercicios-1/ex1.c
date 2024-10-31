#include <stdio.h>
 
int main() {
 
    double raio, num;

    scanf("%lf", &num);
    raio = 3.14159 * (num*num);
    printf("A=%.4lf\n", raio);
    return 0;
}