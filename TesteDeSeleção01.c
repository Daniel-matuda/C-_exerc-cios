#include <stdio.h>

int main(void){
	
	int a, b, c, d;
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	printf("Digite o quarto valor: ");
	scanf("%d", &d);
	
	if (b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0)
	    printf("Valores aceitos!");
	    else printf("Valores não aceitos!");
	    return 0;
}