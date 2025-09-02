#include <stdio.h>

int main(){
    int n;
    printf("-----------------------------Quadrado por impares-----------------------------\n\n");
    do{
        printf("Informe um numero natural: ");
        scanf("%d",&n);
        if (n < 0)
            printf("Valor invalido, informe apenas numeros naturais\n\n");
    }while(n < 0);


    int acc = 0;
    for (int j = 1; j < 2*n; j += 2) {
        acc += j;
    }

    printf("quadrado do numero %d e: %d",n, acc);
    printf("\n\n------------------------------------------------------------------------------");
    return 0;
}