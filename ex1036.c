#include <stdio.h>
#include <math.h>

int main (void){
    float a, b, c, del, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    del = (b * b) - (4 * a * c);

    if (del >= 0 && a != 0) {
        
        x1 = (-b + sqrt(del)) / 2 * a;
        x2 = (-b - sqrt(del) / 2 * a);
        printf("\nX' = %.3f\n", x1);
        printf("\nX'' = %.3f\n\n", x2);
        }

    else {printf("\nValor invalido, tente novamente...\n");}

    system("PAUSE");
    return 0;
}