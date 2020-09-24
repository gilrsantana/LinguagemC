/*
 * Escreva uma função para calcular e retornar o volume de um cilindro. 
 * Esta função deverá receber os valores do raio e da altura (r,h) e retornar 
 * o valor do volume (V cilindro = πhr2).
 */

#include <stdio.h>
#include <locale.h>

#define PI 3.1415

float calculaVolumeCilindro(float medRaio, float medAltura);

int main(void){
    float raio, altura, volume;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("**********************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE VOLUME DO CILINDRO *\n");
    printf("**********************************************************\n");
    printf("\n");

    printf("Informe o valor do raio em cm: ");
    scanf("%f", &raio);
    printf("Informe o valor da altura em cm: ");
    scanf("%f", &altura);

    volume = calculaVolumeCilindro(raio, altura);

    printf("O volume do cilindro mede %.2f cm3.\n\n", volume);

    return 0;
}

float calculaVolumeCilindro(float medRaio, float medAltura){
    float volume = PI * 2 * medRaio * medAltura;
    
    return volume;
}