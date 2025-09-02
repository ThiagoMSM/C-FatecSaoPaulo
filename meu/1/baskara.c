#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta;
    printf("--------------------Calcula Bhaskara-------------------------\n\n");
    printf("Informe os coeficientes a b c (a != 0): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0){
        printf("Nao e uma eq. de 2o grau com a = 0"); 
        printf("\n\n-------------------------------------------------------------");
        return 0;
    }
    
    delta = b*b - 4*a*c;
    if (delta < 0)
        printf("Nao existem raizes reais, delta negativo (%.2f)", delta);
    else if (delta == 0)
        printf("Delta = 0, uma raiz real: %.2f", (-b / (2*a)));
    else {
        float x1,x2;
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Delta = %.2f, duas raizes reais:", delta);
        printf("\nx1 = %.2f, x2 = %.2f", x1, x2);
    }
    printf("\n\n-------------------------------------------------------------");
    return 0;
}