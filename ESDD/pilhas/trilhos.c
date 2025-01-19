#include <stdlib.h>
#include <stdio.h>

struct NoPilha {
    int valor;
    struct NoPilha* abaixo;
};

struct Pilha {
    int tamanho;
    struct NoPilha* topo;
};

void empilhar(struct Pilha* pilha, int valor) {
    pilha->tamanho += 1;
    struct NoPilha* novoTopo = (struct NoPilha*) malloc(sizeof(struct NoPilha));

    novoTopo->valor = valor;
    novoTopo->abaixo = pilha->topo;
    pilha->topo = novoTopo;
}

void desempilhar(struct Pilha* pilha) {
    if (pilha->tamanho > 0) {
        pilha->tamanho -= 1;
        struct NoPilha* velhoTopo = pilha->topo;
        pilha->topo = pilha->topo->abaixo;
        free(velhoTopo);
    }
}

int topo(struct Pilha* pilha) {
    return pilha->topo->valor;
}

int tamanho(struct Pilha* pilha) {
    return pilha->tamanho;
}

int vazia(struct Pilha* pilha) {
    return pilha->tamanho == 0;
}

void inicializar(struct Pilha* pilha) {
    pilha->tamanho = 0;
    pilha->topo = NULL;
}

void destruir(struct Pilha* pilha) {
    while (!vazia(pilha)) {
        desempilhar(pilha);
    }
}

int main() {
    int numeroVagoes, vagao;
    struct Pilha entrada, estacao, saida;

    while (scanf("%d", &numeroVagoes) != EOF) {
        if (!numeroVagoes) break;

        while (scanf("%d", &vagao)) {
            if (!vagao) {
                printf("\n");
                break;
            }

            inicializar(&entrada);
            inicializar(&estacao);
            inicializar(&saida);

            empilhar(&entrada, vagao);
            empilhar(&saida, 1);
            for (int i = 2; i <= numeroVagoes; ++i) {
                scanf("%d", &vagao);
                empilhar(&entrada, vagao);
                empilhar(&saida, i);
            }

            while (!vazia(&entrada) || !vazia(&estacao) || !vazia(&saida)) {
                if (!vazia(&entrada) && !vazia(&saida) && topo(&entrada) == topo(&saida)) {
                    desempilhar(&entrada);
                    desempilhar(&saida);
                } else if (!vazia(&estacao) && !vazia(&saida) && topo(&estacao) == topo(&saida)) {
                    desempilhar(&estacao);
                    desempilhar(&saida);
                } else if (!vazia(&entrada)) {
                    empilhar(&estacao, topo(&entrada));
                    desempilhar(&entrada);
                } else {
                    break;
                }
            }

            if (vazia(&entrada) && vazia(&estacao) && vazia(&saida)) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }

            destruir(&entrada);
            destruir(&estacao);
            destruir(&saida);
        }
    }

    return 0;
}