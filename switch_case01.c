#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int numA, numB, opc, soma, sub, multi, divi, res;

    printf("\nDigite o numero A: \n\n");
    scanf("%d", &numA);

    printf("\nDigite o numero B: \n\n");
    scanf("%d", &numB);
    
    printf("\n¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬\n");
    printf("\n               Calculadora da Joyce                \n");
    printf("\n¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬¬=¬\n\n");
    
    printf("\n Digite [1 - 2 - 3 - 4] para realizar uma operacao entre A e B\n\n");
    printf("\n 1 _ Somar _ (A + B)\n\n");
    printf("\n 2 _ Subtrair (A - B)\n\n");
    printf("\n 3 _ Multiplicar (A X B)\n\n");
    printf("\n 4 _ Dividir (A / B)\n\n");
    
    scanf("%d", &opc);
    
    soma = numA + numB;
    sub = numA - numB;
    divi = numA / numB;
    multi = numA * numB;
    
    switch(opc) {
        case 1: printf("%d + %d = %d", numA, numB, soma); break;
        case 2: printf("%d - %d = %d", numA, numB, sub); break;
        case 3: printf("%d X %d = %d", numA, numB, multi); break;
        case 4: printf("%d / %d = %d", numA, numB, divi); break;
    }
    
    return 0;   
}