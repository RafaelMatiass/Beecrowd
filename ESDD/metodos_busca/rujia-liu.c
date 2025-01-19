#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000010

typedef struct {
    int *data;
    int size;
    int capacity;
} Vector;

void initVector(Vector *v) {
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}

void pushBack(Vector *v, int value) {
    if (v->size == v->capacity) {
        v->capacity = (v->capacity == 0) ? 1 : v->capacity * 2;
        v->data = realloc(v->data, v->capacity * sizeof(int));
    }
    v->data[v->size++] = value;
}

void clearVector(Vector *v) {
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}

Vector T[MAX];

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF) {
        for (int i = 0; i < MAX; i++) {
            initVector(&T[i]);
        }

        for (int i = 1; i <= n; i++) {
            int temp;
            scanf("%d", &temp);
            pushBack(&T[temp], i);
        }

        while (m--) {
            int k, v;
            scanf("%d %d", &k, &v);
            k--; 
            if (k < T[v].size) {
                printf("%d\n", T[v].data[k]);
            } else {
                printf("0\n");
            }
        }

        for (int i = 0; i < MAX; i++) {
            clearVector(&T[i]);
        }
    }

    return 0;
}
