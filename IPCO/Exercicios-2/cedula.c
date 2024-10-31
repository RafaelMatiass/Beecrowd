#include <stdio.h>

int quantidade_notas(int valor_total) {
    int valor_nota, valor;
    int qtdade_notas;

    printf("%d\n", valor_total);
    valor = valor_total;
    valor_nota = 100;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("%d nota(s) de R$ %d,00\n", qtdade_notas, valor_nota);

    valor_nota = 50;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("%d nota(s) de R$ %d,00\n", qtdade_notas, valor_nota);

    valor_nota = 20;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("%d nota(s) de R$ %d,00\n", qtdade_notas, valor_nota);

    valor_nota = 10;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("%d nota(s) de R$ %d,00\n", qtdade_notas, valor_nota);

    valor_nota = 5;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("%d nota(s) de R$ %d,00\n", qtdade_notas, valor_nota);

    valor_nota = 2;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("%d nota(s) de R$ %d,00\n", qtdade_notas, valor_nota);

    valor_nota = 1;
    qtdade_notas = valor / valor_nota;
    valor = valor % valor_nota;
    printf("%d nota(s) de R$ %d,00\n", qtdade_notas, valor_nota);
}

int main() {
    int valor_total;

    scanf("%d", &valor_total);
    quantidade_notas(valor_total);

    return 0;
}
