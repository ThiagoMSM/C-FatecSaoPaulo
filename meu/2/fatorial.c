#include <stdio.h>

int main(){
    int n;
    printf("-----------------------Fatorial-----------------------\n\n");
    do {
        printf("Informe um numero inteiro positivo: ");
        scanf("%d",&n);
        if (n < 0)
            printf("O numero deve ser positivo. Tente novamente\n\n");

    }while(n < 0);
    
    if (n == 0){ /* Caso a parte...*/
        printf("O fatorial de 0 e 1");
        return 0;
    }

    /*Fatorial comum*/
    int acc=n,aux=n;
    
    while (n>1) {
        acc *= n-1;  
        n--;      
    }
    printf("o fatorial de %d e %d", aux, acc);
    printf("\n\n------------------------------------------------------");
    return 0;

    /*
        Qual a melhor estrutura?
        while()?
        do-while()?

        R: Depende do caso, não diria que existe uma melhor e ponto final, existem ocasiões onde uma
        se mostra mais prática que a outra, por exemplo, no looping inicial de validação desse programa,
        o do while é muito mais prático, já para o cálculo do fatorial, não é tão relevante.
    */
}