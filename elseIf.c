#include <stdio.h>


int main() {

    int idade;
    printf("Digite a idade: ");
    scanf("%i", &idade);
    if(idade < 5) {
        printf("\n Nao e nadador: \n");
    }
    else {
        if(idade <= 7){
            printf("\n Categoria Infantil A");       
    }
        else {
            if(idade <= 11) {
                printf("\nCategoria Infantil B");
            }
            else {
                if(idade <= 13) {
                    printf("\nCategoria Juvenil A");
                }
                else {
                    if (idade <= 17) {
                        printf("\nCategoria Juvenil B");
                    }
                    else {
                        printf("\nCategoria Adultos");
                        }
                    }
                }
            }
        }
    return 0;
}