#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000
#define MAX_VALUE 1000000

int main() {
    int num_elementos, num_consultas;

    int **pos = (int **)calloc(MAX_VALUE + 1, sizeof(int *));
    int *sizes = (int *)calloc(MAX_VALUE + 1, sizeof(int));

    while (scanf("%d %d", &num_elementos, &num_consultas) != EOF) {
        for (int i = 0; i <= MAX_VALUE; i++) {
            if (pos[i] != NULL) {
                free(pos[i]);
                pos[i] = NULL;
                sizes[i] = 0;
            }
        }

        int *vetor = (int *)malloc(num_elementos * sizeof(int));

        for (int i = 0; i < num_elementos; i++) {
            scanf("%d", &vetor[i]);

            int res = vetor[i];
            if (pos[res] == NULL) {
                pos[res] = (int *)malloc(num_elementos * sizeof(int));
            }
            pos[res][sizes[res]++] = i + 1; 
        }

        for (int i = 0; i < num_consultas; i++) {
            int k, v;
            scanf("%d %d", &k, &v);

            if (v <= MAX_VALUE && sizes[v] >= k) {
                printf("%d\n", pos[v][k - 1]);
            } else {
                printf("0\n");
            }
        }

        free(vetor);
    }

    for (int i = 0; i <= MAX_VALUE; i++) {
        if (pos[i] != NULL) {
            free(pos[i]);
        }
    }
    free(pos);
    free(sizes);

    return 0;
}
