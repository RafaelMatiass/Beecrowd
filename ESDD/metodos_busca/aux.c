#include <stdio.h>
#include <string.h>

#define MAX_N 100000
#define MAX_V 1000000

int T[MAX_N][MAX_N]; 
int sizes[MAX_V + 1];

int main() {
    int num_elementos, num_consultas;

    while (scanf("%d %d", &num_elementos, &num_consultas) != EOF) {
        memset(sizes, 0, sizeof(sizes));

        for (int i = 1; i <= num_elementos; i++) {
            int temp;
            scanf("%d", &temp);
            T[temp][sizes[temp]++] = i; 
        }

        while (num_consultas--) {
            int k, v;
            scanf("%d %d", &k, &v);

            if (k <= sizes[v]) {
                printf("%d\n", T[v][k - 1]); 
            } else {
                printf("0\n"); 
            }
        }
    }

    return 0;
}
