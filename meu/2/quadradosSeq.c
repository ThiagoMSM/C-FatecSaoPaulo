#include <stdio.h>

int main(){
    int n;
    printf("-----------------------Quadrados da Sequencia-----------------------\n\n");
    while (1){
        printf("Informe um numero inteiro, ou 0 para encerrar: ");
        scanf("%d",&n);
        if (n == 0)
            break;
        printf("o quadrado do numero %d e: %d\n\n", n, n*n);
    }

    return 0;
}