#include <stdio.h>

int main(void){

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (3.5 * nota1 + 7.5 * nota2) / 11;
    printf("a nota %.1f com a nota %.1f resulta na media: %.1f", nota1, nota2, media);
    return 0;
}