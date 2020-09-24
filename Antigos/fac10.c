/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float km, l, km_l;
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
    printf("\n\n*********************************************************************************************************\n\n");
    printf("Faça um algoritmo que obtenha a distância percorrida e oconsumo de combustível e calcule o consumo médio.");
    printf("\n\n*********************************************************************************************************\n");

//Início do código. 
//Recebe a distância percorrida em km.
    printf("\nQuantos km foram percorridos no trecho?\n");
    scanf("%f", &km);
//Recebe o combustível consumido em litros.
    printf("\nQuantos litros de comsbustível foram gastos?\n");
    scanf("%f", &l);
//Calcula e entrega o consumo médio.
    km_l = km / l;
    printf("\nO trecho teve um consumo médio de %.2f km/l.\n\n", km_l);
return 0;
}