/*
 * Escreva uma função para calcular e retornar a hipotenusa de um triângulo retângulo. 
 * Esta função deverá receber os valores dos catetos e retornar o valor da hipotenusa.
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PONTO_A_X 0.0
#define PONTO_A_Y 0.0

//Função para calcular a hipotenusa
float calculaHipotenusa(float medida1, float medida2);

int main(void){
    float cateto1, cateto2, hipotenusa;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("**************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE HIPOTENUSA *\n");
    printf("**************************************************\n");
    printf("\n");

    printf("Informe o valor do primeiro cateto  em cm: ");
    scanf("%f", &cateto1);
    printf("Informe o valor do segundo cateto em cm: ");
    scanf("%f", &cateto2);

    hipotenusa = calculaHipotenusa(cateto1, cateto2);
    printf("A hipotenusa mede %.2f cm.\n\n", hipotenusa);

    return 0;
}

float calculaHipotenusa(float medida1, float medida2){
    float hipotenusa = sqrt(pow(medida1,2) + pow(medida2,2));
    
    return hipotenusa;
}
