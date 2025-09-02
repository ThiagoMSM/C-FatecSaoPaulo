#include <stdio.h>

int main(){
    int n;
    float x;
    printf("-----------------------------Potencia-----------------------------\n\n");
    do{
        printf("Informe quantas vezes deseja elevar a potencia: ");
        scanf("%d",&n);
        if (n < 0)
            printf("Valor invalido, informe numeros inteiros positivos\n\n");
    }while(n < 0);
    printf("Informe o numero real que sera elevado a potencia %d vezes: ",n);
    scanf("%f",&x);

    float acc = 1;
    for(int i=0;i<n;i++){
        acc *= x;
    }
    printf("resultado: %.2f",acc);
    printf("\n\n------------------------------------------------------------------");
    return 0;
}