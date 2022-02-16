#include <stdio.h>

int main(void){

    int n1, n2, soma;
    printf("Digite um valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    printf("%d + %d = %d", n1, n2, soma);
    return 0;
}