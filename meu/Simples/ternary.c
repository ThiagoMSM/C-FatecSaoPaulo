#include <stdio.h>

int main(){
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    printf("O modulo de n eh %.2f", n<0 ? -n:n);
}
