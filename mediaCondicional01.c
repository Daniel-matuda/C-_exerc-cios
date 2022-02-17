#include <stdio.h>

int main(void){
	
	double n1, n2, med, pres, pres02;
	printf("Digite o primeiro valor: ");
	scanf("%lf", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%lf", &n2);
	
	printf("Digite a sua porcentagem de presença (sem o simbolo de porcentagem): ");
	scanf("%lf", &pres);
	
	pres02 = pres / 100;
	med = (n1 + n2) / 2;
	
	if (med >= 9.5 && pres02 >= 0.75)
		printf("Parabens! com a média %.1lf e presença = %.1lf porcento. Aprovado!", med, pres);
		else printf("Média: %.1lf e presença = %.1lf porcento, Reprovado!", med, pres); 
		return 0;
}