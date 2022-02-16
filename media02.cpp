#include <stdio.h>

int main(void){

    float nota1, nota2, nota3, media;
    
    printf("Digite a nota do primeiro aluno: ");
    scanf("%f", &nota1);

    printf("Digite a nota do segundo aluno: ");
    scanf("%f", &nota2);

    printf("Digite a nota do terceiro aluno: ");
    scanf("%f", &nota3);

    media = (nota1 * 2) + (nota2 * 3) + (nota3 * 5);
    printf("A media entre %.1f e %.1f e %.1f = %.1f", nota1, nota2, nota3, media);
    
    return 0;
}