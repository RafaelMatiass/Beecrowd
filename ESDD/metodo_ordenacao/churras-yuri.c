#include <stdio.h>
#include <string.h>

void ordena_por_validade(int validade[], char carne[][21], int tam) {
    int i, j, elemento_auxiliar;
    char auxiliar[21]; 

    
    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - 1 - i; j++) {
            if (validade[j] > validade[j + 1]) {
                
                elemento_auxiliar = validade[j];
                validade[j] = validade[j + 1];
                validade[j + 1] = elemento_auxiliar;

                
                strcpy(auxiliar, carne[j]);
                strcpy(carne[j], carne[j + 1]);
                strcpy(carne[j + 1], auxiliar);
            }
        }
    }
}

int main() {
    int N;

    
    while (scanf("%d", &N) != EOF) {
        
        if (N == 0) {
            continue;
        }

        int validade[N];
        char carne[N][21]; 

        
        for (int i = 0; i < N; i++) {
            scanf("%s", carne[i]);
            scanf("%d", &validade[i]);
        }

        
        ordena_por_validade(validade, carne, N);

        
        for (int i = 0; i < N; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%s", carne[i]);
        }
        printf("\n");
    }

    return 0;
}