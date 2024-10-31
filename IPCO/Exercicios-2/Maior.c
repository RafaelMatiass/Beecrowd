#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int encontrar_maior(int a, int b, int c) {
    
    int maior_ab, maior;
    maior_ab = (a + b + abs(a - b)) / 2;
    maior = (maior_ab + c + abs(maior_ab - c)) / 2;

    return maior;
}

int main() {
    int a, b, c, num_maior;

    scanf("%d %d %d", &a, &b, &c);
    
    num_maior = encontrar_maior(a, b, c);
    printf("%d eh o maior\n", num_maior);
    
    return 0;
}
