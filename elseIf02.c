#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int idade;
    printf("\nDigite a idade: ");
    scanf("%i", &idade);
    if(idade < 5) {
        printf("\n Nao e nadador\n\n");
    }
    else {
        if(idade <= 7){
            printf("\n Categoria Infantil A\n\n");       
    }
        else {
            if(idade <= 11) {
                printf("\nCategoria Infantil B\n\n");
            }
            else {
                if(idade <= 13) {
                    printf("\nCategoria Juvenil A\n\n");
                }
                else {
                    if (idade <= 17) {
                        printf("\nCategoria Juvenil B\n\n");
                    }
                    else {
                        printf("\nCategoria Adultos\n\n");
                        }
                    }
                }
            }
        }
    system("PAUSE");
    return 0;
}