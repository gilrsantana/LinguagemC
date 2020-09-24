/*
 * Escreva uma função para calcular e retornar a área de um triângulo. 
 * Esta função recebe os valores dos 3 lados e calcula a área pela fórmula de Heron:
 * A² = S*(S-a)(S-b)(S-c).
 * Escreva uma função para calcular e retornar o perímetro de um triângulo. 
 * Esta função recebe os valores dos 3 lados e retorna o valor do perímetro.
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

float calculaAreaTriangulo(float medida1, float medida2, float medida3);

float calculaSemiPerimetro(float medida1, float medida2, float medida3);

int main(void){
    float lado1, lado2, lado3, area;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("**************************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE ÁREA DO TRIÂNGULO *\n");
    printf("**************************************************************\n");
    printf("\n");

    printf("Informe a medida do lado 1 em cm: ");
    scanf("%f", &lado1);
    printf("Informe a medida do lado 2 em cm: ");
    scanf("%f", &lado2);
    printf("Informe a medida do lado 3 em cm: ");
    scanf("%f", &lado3);

    area = calculaAreaTriangulo(lado1, lado2, lado3);

    printf("O área do triângulo mede %.2f cm.\n\n", area);

    return 0;
}

float calculaAreaTriangulo(float medida1, float medida2, float medida3){
    float medida;
    float sP = calculaSemiPerimetro(medida1, medida2, medida3);
    medida = sqrt( sP * (sP - medida1)*(sP - medida2)*(sP - medida3) );
    
    return medida;
}

float calculaSemiPerimetro(float medida1, float medida2, float medida3){
    float semiPerimetro = (medida1 + medida2 + medida3) / 2;

    return semiPerimetro;
}