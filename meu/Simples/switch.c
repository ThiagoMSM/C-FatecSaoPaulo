#include <stdio.h>

int main(){
    float x,y;
    char op;
    printf("\nDigite a expressao: ");
    scanf("%f %c %f", &x, &op, &y);
    switch (op) {
        case '+': printf("\nvalor = %.2f",x+y); break;
        case '-': printf("\nvalor = %.2f",x-y); break;
        case '*': printf("\nvalor = %.2f",x*y); break;
        case '/': (y != 0 ? printf("\nvalor = %.2f",x/y) : printf("\nImpossivel dividir por 0")); break;
        default: printf("\nOperador invalido %c",op);
    }
    return 0;
}
