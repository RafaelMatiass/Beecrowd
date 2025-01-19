#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int tempo_livre;
    int id;
} Caixa;

void troca(Caixa *a, Caixa *b) {
    Caixa temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(Caixa heap[], int n, int i) {
    int menor = i;
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;

    if (esq < n && (heap[esq].tempo_livre < heap[menor].tempo_livre || 
                   (heap[esq].tempo_livre == heap[menor].tempo_livre && heap[esq].id < heap[menor].id))) {
        menor = esq;
    }

    if (dir < n && (heap[dir].tempo_livre < heap[menor].tempo_livre || 
                   (heap[dir].tempo_livre == heap[menor].tempo_livre && heap[dir].id < heap[menor].id))) {
        menor = dir;
    }

    if (menor != i) {
        troca(&heap[i], &heap[menor]);
        heapify(heap, n, menor);
    }
}

Caixa removeMin(Caixa heap[], int *n) {
    Caixa raiz = heap[0];
    heap[0] = heap[*n - 1];
    (*n)--;
    heapify(heap, *n, 0);
    return raiz;
}

void insereHeap(Caixa heap[], int *n, Caixa novo) {
    heap[*n] = novo;
    int i = *n;
    (*n)++;
    while (i > 0 && (heap[(i - 1) / 2].tempo_livre > heap[i].tempo_livre || 
                    (heap[(i - 1) / 2].tempo_livre == heap[i].tempo_livre && heap[(i - 1) / 2].id > heap[i].id))) {
        troca(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int vi[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vi[i]);
    }

    int cj[M];
    for (int j = 0; j < M; j++) {
        scanf("%d", &cj[j]);
    }

    Caixa heap[N];
    int tamanho_heap = 0;
    for (int i = 0; i < N; i++) {
        Caixa novo = {0, i};
        insereHeap(heap, &tamanho_heap, novo);
    }

    for (int j = 0; j < M; j++) {
        Caixa caixa_atual = removeMin(heap, &tamanho_heap);
        caixa_atual.tempo_livre += vi[caixa_atual.id] * cj[j];
        insereHeap(heap, &tamanho_heap, caixa_atual);
    }

    int tempo_total = 0;
    for (int i = 0; i < tamanho_heap; i++) {
        if (heap[i].tempo_livre > tempo_total) {
            tempo_total = heap[i].tempo_livre;
        }
    }

    printf("%d\n", tempo_total);
    return 0;
}