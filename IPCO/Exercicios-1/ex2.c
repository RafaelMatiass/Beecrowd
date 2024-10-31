#include <stdio.h>
 
int main() {

    int cod_peca1, cod_peca2, num_peca1, num_peca2;
    float valor_peca1, valor_peca2, total;

    scanf("%d %d %f", &cod_peca1, &num_peca1, &valor_peca1);
    scanf("%d %d %f", &cod_peca2, &num_peca2, &valor_peca2);
    
    total = (num_peca1 * valor_peca1) + (num_peca2 * valor_peca2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);  
    return 0;
}