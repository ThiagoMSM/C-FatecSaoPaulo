#include <stdio.h>

int main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
	printf("O inteiro %d e %s", n, n % 2 == 0 ? "par": "impar");
    return 0;
}