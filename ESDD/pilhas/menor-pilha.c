#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int *elements;
    int *min_elements;
    int top;
    int size;
} T_stack1;

T_stack1* init(int maxsize) {
    T_stack1* pilha = (T_stack1*)malloc(sizeof(T_stack1));
    pilha->elements = (int*)malloc(sizeof(int) * maxsize);
    pilha->min_elements = (int*)malloc(sizeof(int) * maxsize);
    pilha->top = -1;
    pilha->size = maxsize;
    return pilha;
}

void push(T_stack1* pilha, int valor) {
    if (pilha->top + 1 < pilha->size) {
        pilha->elements[++pilha->top] = valor;
        if (pilha->top == 0) {
            pilha->min_elements[pilha->top] = valor;
        } else {
            pilha->min_elements[pilha->top] = valor < pilha->min_elements[pilha->top - 1] 
                                              ? valor 
                                              : pilha->min_elements[pilha->top - 1];
        }
    }
}

void pop(T_stack1* pilha) {
    if (pilha->top >= 0) {
        pilha->top--;
    }
}

int menor(T_stack1* pilha) {
    if (pilha->top >= 0) {
        return pilha->min_elements[pilha->top];
    }
    return -1;
}

bool is_empty(T_stack1* pilha) {
    return pilha->top < 0;
}

void destroy(T_stack1* pilha) {
    free(pilha->elements);
    free(pilha->min_elements);
    free(pilha);
}

int main() {
    int verifica;
    scanf("%d", &verifica);

    T_stack1* pilha = init(verifica);

    for (int i = 0; i < verifica; i++) {
        char chave[10];
        scanf("%s", chave);

        if (strcmp(chave, "PUSH") == 0) {
            int aux;
            scanf("%d", &aux);
            push(pilha, aux);
        } else if (strcmp(chave, "POP") == 0) {
            if (is_empty(pilha)) {
                printf("EMPTY\n");
            } else {
                pop(pilha);
            }
        } else if (strcmp(chave, "MIN") == 0) {
            if (is_empty(pilha)) {
                printf("EMPTY\n");
            } else {
                printf("%d\n", menor(pilha));
            }
        }
    }

    destroy(pilha);
    return 0;
}