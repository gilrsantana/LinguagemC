/*
 * Escreva uma função para calcular e retornar a distância entre dois pontos. A função recebe os valores das
coordenadas dos pontos e retorna o valor da distância entre eles (comprimento da semireta) calculada por:
 * d²(p1,p2) = (x2 - x1)² + (y2 - y1)²
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

float calculaDistancia(float medidaA1, float medidaA2, float medidaB1, float medidaB2);

int main(void){
    float pontoAx, pontoAy, pontoBx, pontoBy, distancia;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("**************************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE DISTÂNCIA ENTRE PONTOS *\n");
    printf("**************************************************************\n");
    printf("\n");

    printf("Informe a posição x do ponto A: ");
    scanf("%F", &pontoAx);
    printf("Informe a posição y do ponto A: ");
    scanf("%f", &pontoAy);
    printf("Informe a posição x do ponto B: ");
    scanf("%f", &pontoBx);
    printf("Informe a posição x do ponto B: ");
    scanf("%f", &pontoBy);

    distancia = calculaDistancia(pontoAx, pontoAy, pontoBx, pontoBy);

    printf("A distância entre os pontos mede %.2f.\n\n", distancia);

    return 0;
}

float calculaDistancia(float medidaA1, float medidaA2, float medidaB1, float medidaB2){
    float medida = sqrt(pow((medidaB1 - medidaA1),2) + pow((medidaB2 - medidaA2),2));
    
    return medida;
}