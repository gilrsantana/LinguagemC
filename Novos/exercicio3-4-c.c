/* 
 * Escreva uma função para calcular e retornar o volume de uma caixa retangular. 
 * Esta função deverá receber os valores dos lados a e b e altura h e retornar 
 * o valor do volume. (V caixa = a * b * h)
 */

#include <stdio.h>
#include <locale.h>

int calculaVolumeCaixa(int aresta1, int aresta2, int aresta3);

int main(void){
    int base, altura, profundidade, volume;
    setlocale(LC_ALL, "Portuguese");
    
    printf("\n");
    printf("*******************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE VOLUME DE CAIXA *\n");
    printf("*******************************************************\n");
    printf("\n");

    printf("Informe o valor da base em cm: ");
    scanf("%i", &base);

    printf("Informe o valor da altura em cm: ");
    scanf("%i", &altura);

    printf("Informe o valor da profundidade em cm: ");
    scanf("%i", &profundidade);
    
    volume = calculaVolumeCaixa(base, altura, profundidade);

    printf("O volume da caixa mede %i cm3.\n\n", volume);

    return 0;
}

int calculaVolumeCaixa(int aresta1, int aresta2, int aresta3){
    int volume = aresta1 * aresta2 * aresta3;

    return volume;
}