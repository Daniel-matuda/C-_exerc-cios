#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void){

    float area, raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = PI * (raio * raio);

    printf("A area cincunferencia de raio %.1f = %.1f", raio, area);
}