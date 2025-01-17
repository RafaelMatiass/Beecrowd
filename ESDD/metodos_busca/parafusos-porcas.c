#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10001
#define MAX_CAIXAS 100

int main() {
    int rack[MAX_SIZE] = {0}; 
    int n, x, y, num;

    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < MAX_SIZE; i++) {
            rack[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            for (int j = x; j <= y; j++) {
                rack[j]++;
            }
        }

        scanf("%d", &num);

        int encontrei = 0;
        int inicio = -1, fim = -1;

        for (int i = 0; i < MAX_SIZE; i++) {
            if (rack[i] > 0 && i == num) {
                if (!encontrei) {
                    encontrei = 1;
                    inicio = i;
                }
                fim = i;
            }
        }

        if (encontrei) {
            printf("%d found from %d to %d\n", num, inicio, fim);
        } else {
            printf("%d not found\n", num);
        }
    }

    return 0;
}
