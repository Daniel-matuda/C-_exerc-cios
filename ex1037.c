#include<stdio.h>

int main (void) {
    
    float valor;
    
    printf("\nDigite um valor: \n");
    scanf("%f", &valor);

    if (valor >= 0 && valor <= 25)
        printf("\nIntervalo de: [0, 25]\n\n");
    else if (valor > 25 && valor <= 50)
        printf("\nIntervalo de: [25, 50]\n\n");
    else if (valor > 50 && valor <= 75)
        printf("\nIntervalo de: [50, 75]\n\n");
    else if (valor > 75 && valor <= 100)
        printf("\nIntervalo de: [75, 100]\n\n");
    else printf("\nFora de intervalo\n\n");

    system("PAUSE");
    return 0;
}