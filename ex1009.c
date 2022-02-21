#include <stdio.h>

int main(void) {
    char name;
    float sal, vend, total;
    
    printf("\nNome do funcionario: \n");
    scanf("%s", &name);
   
    printf("\nSalario: \n");
    scanf("%f", &sal);
    
    printf("\nTotal de vendas no mes: \n");
    scanf("%f", &vend);

    total = sal + (vend*15) / 100;
    printf("\nSalario final do funcionario: \n\n%.2f", total);

    system("PAUSE");
    return 0;
}