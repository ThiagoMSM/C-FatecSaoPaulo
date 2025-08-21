#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
	printf("O num %d eh %s", n, n % 2 == 0 ? "par": "impar");
}
