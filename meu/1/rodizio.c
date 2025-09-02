#include <stdio.h>

int main(){
    int dig;
    printf("--------------------Checa Rodizio--------------------\n\n");
    printf("Informe o digito final da placa: ");
    scanf("%d", &dig);
	switch (dig) {
        case 1:
        case 2: printf("O rodizio para a placa final %d e Segunda-Feira", dig); break;
        case 3:
        case 4: printf("O rodizio para a placa final %d e Terca-Feira", dig); break;
        case 5:
        case 6: printf("O rodizio para a placa final %d e Quarta-Feira", dig); break;
        case 7:
        case 8: printf("O rodizio para a placa final %d e Quinta-Feira", dig); break;
        case 9:
        case 0: printf("O rodizio para a placa final %d e Sexta-Feira", dig); break;

        default: printf("Digito %d invalido", dig); break;
    }
    printf("\n\n-----------------------------------------------------");
    return 0;
}