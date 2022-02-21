#include <stdio.h>

int main(void) {
    
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade <= 10)
        printf("\nCrianca\n\n");
        
        else if (idade <= 18)
            printf ("\nAdolescente\n\n");
            
            else if (idade <= 60)
                printf("\nAdulto\n\n");
                
                else if (idade <= 100)
                    printf("\nidoso\n\n");
                    
                    else if (idade > 100)
                        printf("\nZumbi\n\n");
                        
                        else printf("\nIdade Invalida\n\n");

    system("PAUSE");
    return 0;
}