#include <stdio.h>

int main(void){
	
	float n1, n2, med;
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	
	med = (n1 + n2) / 2;
	
	if (med >= 9.5)
		printf("Parabens! com a média %.1f Aprovado!", med);
		else printf("Média: %.1f, Reprovado!", med);
		return 0;
}