    #include<stdio.h>


    int ordenar_valores(int a, int b, int c);


    int main(){
    int a, b, c;


    scanf("%d %d %d", &a, &b, &c);
    ordenar_valores(a, b, c);


    return 0;
    }


    int ordenar_valores(int a, int b, int c){


    int a_temp, b_temp, c_temp;


    if (a <= b && a <= c) {
        a_temp = a;
        if (b <= c) {
            b_temp = b;
            c_temp = c;
        } else {
            b_temp = c;
            c_temp = b;
        }
    } else if (b <= a && b <= c) {
        a_temp = b;
        if (a <= c) {
            b_temp = a;
            c_temp = c;
        } else {
            b_temp = c;
            c_temp = a;
        }
    } else {
        a_temp = c;
        if (a <= b) {
            b_temp = a;
            c_temp = b;
        } else {
            b_temp = b;
            c_temp = a;
        }
    }


    printf("%d\n %d\n %d\n\n", a_temp, b_temp, c_temp);
    printf("%d\n %d\n %d\n", a, b, c);
    }
