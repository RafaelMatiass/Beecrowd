#include <stdio.h>
#include <string.h>

int conta_diamante(char *element) {
    int contadorAbertura = 0, diamantes = 0;

    for (int i = 0; i < strlen(element); i++) {
        if (element[i] == '<') {
            contadorAbertura++;
        } else if (element[i] == '>' && contadorAbertura > 0) {
            contadorAbertura--;
            diamantes++;
        }
    }

    return diamantes;
}

int main() {
    int chave;
    char element[1001];

    scanf("%d", &chave);
    getchar(); 

    for (int i = 0; i < chave; i++) {
        fgets(element, 1001, stdin);
        element[strcspn(element, "\n")] = '\0'; 

        int resultado = conta_diamante(element);
        printf("%d\n", resultado);
    }

    return 0;
}