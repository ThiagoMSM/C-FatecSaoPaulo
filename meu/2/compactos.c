/*
Quais os valores das variáveis x e y após a execução dessas instruções?
Seja x=3 e a instrução y = x * (x + 1) * x++. => Respota: y=  36, x = 3
Seja x=5, y = 3 e a instrução y *= x+1. => Resposta: y = 18, x = 5
*/

#include <stdio.h>

void prob1(){
    printf("------------------------------------------\n");
    printf("problema 1:\n");
    printf("x = 3\ny = x * (x+1) * x++\n");
    printf("--------Substituindo...--------\n");
    printf("y = 3 * (3+1) * 3++\n");
    printf("y = 3 * 4 * 3++\n");
    printf("y = 12 * 3++\n");
    printf("y = 36 (3++ nao chega a executar, pois nao tem prioridade)\n");
    printf("----------Fim---------\n");
    printf("y = 36 | x = 3\n\n");
    printf("------------------------------------------\n");
}

void prob2(){
    printf("------------------------------------------\n");
    printf("problema 2:\n");
    printf("x = 5\ny = 3\n");
    printf("--------Formula...--------\n");
    printf("y *= x+1\n");
    printf("--------Substituindo...--------\n");
    printf("3 *= 5+1\n");
    printf("3 *= 6\n");
    printf("3 = 3 * 6\n");
    printf("3 = 18\n");
    printf("18\n");
    printf("----------Fim---------\n");
    printf("y = 18 | x = 5\n\n");
    printf("------------------------------------------\n");
}


int main(){
    printf("--------------------Operadores Compactos--------------------\n\n");
    int n;
    while (1) {
        printf("Informe o problema desejado para solucao:\n");
        printf("1 => (x = 3 | y = x * (x + 1) * x++)\n");
        printf("2 => (x = 5 | y = 3 | y *= x+1)\n");
        printf("0 => Sair do programa\n");
        printf("\nInforme sua escolha (num): ");
        scanf("%d",&n);
        switch (n) {
            case 1:
                prob1(); break;
            case 2: 
                prob2(); break;
            case 0:
                return 0;
            default:
                printf("\nOpcao invalida, tente novamente\n\n"); 
                printf("------------------------------------------\n");
                break;
        }
    }

    return 0;
}