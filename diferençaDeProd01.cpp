#include <stdio.h>

int main(){

    int n1, n2, n3, n4, resp;
    printf("Digite o primeiro valor A (que será multiplicado por próximo): ");
    scanf("%d", &n1);

    printf("Digite o segundo valor B (para multiplicar o anterior): ");
    scanf("%d", &n2);

    printf("Digite o valor C (para multiplicar o próximo): ");
    scanf("%d", &n3);

    printf("Digite o segundo valor D (para multiplicar o anterior): ");
    scanf("%d", &n4);

    resp = (n1 * n2) - (n3 * n4);
    printf("%d X %d - %d X %d = %d", n1, n2, n3, n4, resp);
    return 0;
}