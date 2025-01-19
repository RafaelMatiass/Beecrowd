#include <stdio.h>
#include <stdbool.h>
#define MOD 1000000007

void merge(int colecao[], int esquerda, int meio, int direita) {
    int i, j, k;
    int tamanhoEsquerda = meio - esquerda + 1;
    int tamanhoDireita = direita - meio;

    int esquerdaArray[tamanhoEsquerda], direitaArray[tamanhoDireita];

    for (i = 0; i < tamanhoEsquerda; i++) {
        esquerdaArray[i] = colecao[esquerda + i];
    }
    for (j = 0; j < tamanhoDireita; j++) {
        direitaArray[j] = colecao[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = esquerda;

    while (i < tamanhoEsquerda && j < tamanhoDireita) {
        if (esquerdaArray[i] >= direitaArray[j]) {
            colecao[k] = esquerdaArray[i];
            i++;
        } else {
            colecao[k] = direitaArray[j];
            j++;
        }
        k++;
    }

    while (i < tamanhoEsquerda) {
        colecao[k] = esquerdaArray[i];
        i++;
        k++;
    }

    while (j < tamanhoDireita) {
        colecao[k] = direitaArray[j];
        j++;
        k++;
    }
}

void mergeSort(int colecao[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(colecao, esquerda, meio);
        mergeSort(colecao, meio + 1, direita);

        merge(colecao, esquerda, meio, direita);
    }
}

int main() {
    int x, k, vetor [1000000];
    while (scanf("%d%d", &x, &k) != EOF && k > 0) {
        for (int i = 0; i < x; i++) {
            scanf("%d", &vetor[i]);
        }
        mergeSort(vetor, 0, x - 1);

        int guarda = 0;
        for (int i = 0; i < k; i++) {
            guarda = (guarda+vetor[i])%MOD;
        }

        printf("%d\n", guarda);
    }
    return 0;
}