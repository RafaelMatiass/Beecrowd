#include <stdio.h>
 
int main() {

    int hrs, vm, d;
    float lt;

    scanf("%d %d", &hrs, &vm);
    d = hrs * vm;
    lt = d / 12.0;
    printf("%.3f\n", lt);  
    return 0;
}