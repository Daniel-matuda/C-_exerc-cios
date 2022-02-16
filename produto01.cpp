#include <stdio.h>

int main(void){

    float n1, n2, prod;
    printf("Digite um valor para ser multiplicado: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor que multiplicará o primeiro: ");
    scanf("%f", &n2);

    prod = n1 * n2;
    printf("%.1f X %.1f = %.1f", n1, n2, prod);
    return 0;
}