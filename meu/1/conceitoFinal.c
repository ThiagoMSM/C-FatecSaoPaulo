#include <stdio.h>

int main(){
    int faltas;
    float media;
    printf("--------------------Conceito Final--------------------\n\n");
    printf("Informe a quantidade de faltas e a media: ");
    scanf("%d %f", &faltas, &media);

    if (faltas > 5) 
        printf("Conceito Final: F");
    else if (media < 6)
        printf("Conceito Final: C");
    else if (media < 7.5)
        printf("Conceito Final: B");
    else if (media < 9)
        printf("Conceito Final: A");
    else
        printf("Conceito Final: E");
    
    printf("\n\n------------------------------------------------------");
    return 0;
}