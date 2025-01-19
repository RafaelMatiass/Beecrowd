#include <stdio.h>
#include <string.h>
#include <strings.h>

void ordena_nomes(char vetor[][100], int tam) {
    for (int i = 1; i < tam; i++) {
        char chave[100];
        strcpy(chave, vetor[i]);
        int j = i - 1;

        while (j >= 0 && strcmp(vetor[j], chave) > 0) {
            strcpy(vetor[j + 1], vetor[j]);
            j--;
        }
        strcpy(vetor[j + 1], chave);
    }
}

int main() {
    int x, cont_bem = 0, cont_mal = 0;

    scanf("%d", &x);


    char vetor_nomes[x][100];
    char comportamento;

    for (int i = 0; i < x; i++) {
        scanf(" %c", &comportamento); 
        getchar(); 
        fgets(vetor_nomes[i], 100, stdin);
        vetor_nomes[i][strcspn(vetor_nomes[i], "\n")] = 0;

        if (comportamento == '+') {
            cont_bem += 1;
        } else if (comportamento == '-') {
            cont_mal += 1;
        }
    }

    ordena_nomes(vetor_nomes, x); 

    for (int i = 0; i < x; i++) {
        printf("%s\n", vetor_nomes[i]); 
    }
    
    printf("Se comportaram: %d | Nao se comportaram: %d\n", cont_bem, cont_mal);

    return 0;
}