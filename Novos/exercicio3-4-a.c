/* Escreva uma função para calcular e retornar a área de um retângulo. 
 * Esta função deverá receber os valores das duas dimensões (base e altura)
 * e retornar o valor da área.
 */

#include <stdio.h>
#include <locale.h>

int calculaAreaRetangulo(int lado1, int lado2);

int main(void){
    int base, altura, area;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("*********************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE ÁREA DE RETÂNGULO *\n");
    printf("*********************************************************\n");
    printf("\n");

    printf("Informe o valor da base em cm: ");
    scanf("%i", &base);

    printf("Informe o valor da altura em cm: ");
    scanf("%i", &altura);
    
    area = calculaAreaRetangulo(base, altura);

    printf("A área do retângulo é %i cm2.\n\n", area);

    return 0;
}

int calculaAreaRetangulo(int lado1, int lado2){
    int area = lado1 * lado2;

    return area;
}