#include <stdio.h>

struct Fracao
{
    int numerador, denominador;
};

struct Fracao somar(struct Fracao fracao1, struct Fracao fracao2)
{
    struct Fracao resultado;

    resultado.numerador = fracao1.numerador * fracao2.denominador + fracao2.numerador * fracao1.denominador;
    resultado.denominador = fracao1.denominador * fracao2.denominador;

    return resultado;
}

struct Fracao subtrair(struct Fracao fracao1, struct Fracao fracao2)
{
    struct Fracao resultado;

    resultado.numerador = fracao1.numerador * fracao2.denominador - fracao2.numerador * fracao1.denominador;
    resultado.denominador = fracao1.denominador * fracao2.denominador;

    return resultado;
}

struct Fracao multiplicar(struct Fracao fracao1, struct Fracao fracao2)
{
    struct Fracao resultado;

    resultado.numerador = fracao1.numerador * fracao2.numerador;
    resultado.denominador = fracao1.denominador * fracao2.denominador;

    return resultado;
}

struct Fracao dividir(struct Fracao fracao1, struct Fracao fracao2)
{
    struct Fracao resultado;

    resultado.numerador = fracao1.numerador * fracao2.denominador;
    resultado.denominador = fracao2.numerador * fracao1.denominador;

    return resultado;
}

int calcularMDC(int a, int b)
{
    return (b == 0) ? a : calcularMDC(b, a % b);
}

struct Fracao simplificar(struct Fracao fracao)
{
    int mdc = (fracao.numerador < 0) ? calcularMDC(-fracao.numerador, fracao.denominador) : calcularMDC(fracao.numerador, fracao.denominador);

    fracao.numerador /= mdc;
    fracao.denominador /= mdc;

    return fracao;
}

int main()
{
    int numeroDeOperacoes;
    char operador;
    struct Fracao fracao1, fracao2, resultado;

    scanf("%d\n", &numeroDeOperacoes);

    for (int i = 0; i < numeroDeOperacoes; ++i)
    {
        scanf("%d / %d %c %d / %d\n", &fracao1.numerador, &fracao1.denominador, &operador, &fracao2.numerador, &fracao2.denominador);

        switch (operador)
        {
        case '+':
            resultado = somar(fracao1, fracao2);
            break;
        case '-':
            resultado = subtrair(fracao1, fracao2);
            break;
        case '*':
            resultado = multiplicar(fracao1, fracao2);
            break;
        case '/':
            resultado = dividir(fracao1, fracao2);
            break;
        }

        printf("%d/%d = ", resultado.numerador, resultado.denominador);
        resultado = simplificar(resultado);
        printf("%d/%d\n", resultado.numerador, resultado.denominador);
    }

    return 0;
}