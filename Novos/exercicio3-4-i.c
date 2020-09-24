/*
 * Escreva uma função para calcular e retornar o perímetro de um triângulo. 
 * Esta função recebe os valores dos 3 lados e retorna o valor do perímetro.
 */

#include <stdio.h>
#include <locale.h>

float calculaPerimetroTriangulo(float medida1, float medida2, float medida3);

int main(void){
    float lado1, lado2, lado3, perimetro;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("**************************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE PERÍMETRO DO TRIÂNGULO *\n");
    printf("**************************************************************\n");
    printf("\n");

    printf("Informe a medida do lado 1 em cm: ");
    scanf("%f", &lado1);
    printf("Informe a medida do lado 2 em cm: ");
    scanf("%f", &lado2);
    printf("Informe a medida do lado 3 em cm: ");
    scanf("%f", &lado3);

    perimetro = calculaPerimetroTriangulo(lado1, lado2, lado3);

    printf("O perímetro do triângulo mede %.2f cm.\n\n", perimetro);

    return 0;
}

float calculaPerimetroTriangulo(float medida1, float medida2, float medida3){
    float medida = medida1 + medida2 + medida3;
    
    return medida;
}