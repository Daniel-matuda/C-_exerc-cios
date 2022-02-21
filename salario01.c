#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num, horas;
    float value, totsal;

    printf("\nDigite o numero do funcionario: \n");
    scanf("%d", &num);

    printf("\nDigite o numero de horas trabalhadas: \n");
    scanf("%d", &horas);

    printf("\nDigite o valor recebido em R$ por hora trabalhada: \n");
    scanf("%f", &value);

    printf("\nFuncionario %d, trabalhando %d horas a R$ %.1f por hora...\n", num, horas, value);
    totsal = horas * value;
    printf("\nVoce recebe R$ %.1f\n", totsal);


    system("PAUSE");
    return 0;
}