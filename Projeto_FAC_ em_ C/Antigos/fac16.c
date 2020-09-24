/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>
#include <math.h>

int main(void){
    
    #define PI 3.14159
    float raio, area, renTinta, qtdTinta, qtdLata;
    float arredonda_pcima = 0.0;

//Cabeçalho. Nome da instituição. 
    printf("\n");
    printf("\n");
    printf("*****   *   ***** ***** ***** *****  ****\n");
    printf("*      * *  *       *   *     *   *    * \n");
    printf("*     *   * *       *   *     *   *    * \n");
    printf("****  ***** ****    *   ****  *****    * \n");
    printf("*     *   * *       *   *     *  *  *  * \n");
    printf("*     *   * *       *   *     *   * * *  \n");
    printf("*     *   * *****   *   ***** *   *  *   \n");

//Cabeçalho da atividade.
    printf("\n\n************************************************************************************************************************\n\n");
    printf("informe a quantidade de tinta e latas necessárias para pintar uma mesa com base no raio e rendimento da tinta informado.");
    printf("\n\n************************************************************************************************************************\n");

//Início do código.
//Recebe a medida do raio da mesa e o rendimento da lata de tinta.
    printf("\nQual o raio da mesa?(medida em metros)\n");
    scanf("%f", &raio);
    printf("\nQual o rendmento da tinta?(padrão 5m/l)\n");
    scanf("%f", &renTinta); 
//Calcula a área da mesa.
    area = PI * pow(raio,2.0);
//Equaciona a quantidade de tinta pela area.
    qtdTinta = (area / renTinta);
//Considera que cada lata de tinta tem 10 lintros de tinta.
    qtdLata = (qtdTinta / 10.0);
//Arredonda o valor para que se tenha a quantidade ajustada de latas de tinta.
    arredonda_pcima = ceil(qtdLata);
//Entrega os valores de quantidade de tinta e latas.
    printf("\npara uma mesa de raio %.2f m e área de %.2f m²", raio, area);
    printf(" será(ão) consumido(s) %.2f litros de tinta e", qtdTinta);
    printf(" será(ão) necessária(as) %.0f latas.\n\n", arredonda_pcima);
 

    return 0;
}
