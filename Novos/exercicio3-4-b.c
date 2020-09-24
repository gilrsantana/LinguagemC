/* 
 * Escreva uma função para calcular e retornar o perímetro de um retângulo. 
 * Esta função deverá receber os valores das duas dimensões (base e altura) 
 * e retornar o valor do perímetro. 
 */

#include <stdio.h>
#include <locale.h>

int calculaPerimetroRetangulo(int lado1, int lado2);

int main(void){
    int base, altura, area;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("**************************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE PERÍMETRO DE RETÂNGULO *\n");
    printf("**************************************************************\n");
    printf("\n");

    printf("Informe o valor da base em cm: ");
    scanf("%i", &base);

    printf("Informe o valor da altura em cm: ");
    scanf("%i", &altura);
    
    area = calculaPerimetroRetangulo(base, altura);

    printf("O perímetro do retângulo mede %i cm.\n\n", area);

    return 0;
}

int calculaPerimetroRetangulo(int lado1, int lado2){
    int perimetro = (lado1 * 2)+(lado2 * 2);

    return perimetro;
}