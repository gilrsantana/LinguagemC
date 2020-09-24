/* 
 * Escreva uma função para calcular e retornar a área de um círculo. 
 * Esta função deverá receber o valor do raio como parâmetro e retornar o valor da área
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>


float calculaAreaCirculo(float tamanho);

int main(void){
    float raio, area;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("*******************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE AREA DO CÍRCULO *\n");
    printf("*******************************************************\n");
    printf("\n");

    printf("Informe o valor do raio em cm: ");
    scanf("%f", &raio);

    area = calculaAreaCirculo(raio);

    printf("A area do círculo mede %.2f cm2.\n\n", area);

    return 0;
}

float calculaAreaCirculo(float medida){
    float area = M_PI * pow(medida,2);
    
    return area;
}