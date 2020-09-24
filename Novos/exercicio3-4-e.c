/* 
 * Escreva uma função para calcular e retornar o perímetro um círculo. 
 * Esta função deverá receber o valor do raio como parâmetro e retornar o valor do perímetro.
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.1415

float calculaPerimetroCirculo(float tamanho);

int main(void){
    float raio, perimetro;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("************************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE PERÍMETRO DO CÍRCULO *\n");
    printf("************************************************************\n");
    printf("\n");

    printf("Informe o valor do raio em cm: ");
    scanf("%f", &raio);

    perimetro = calculaPerimetroCirculo(raio);

    printf("O perímetro do círculo mede %.2f cm.\n\n", perimetro);

    return 0;
}

float calculaPerimetroCirculo(float medida){
    float perimetro = PI * 2 * medida;
    
    return perimetro;
}