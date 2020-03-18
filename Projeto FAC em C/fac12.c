/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float ld1, ld2, area;
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
    printf("\n\n****************************************************************************\n\n");
    printf("Receba as medidas de uma sala e calcule quantos metros quadrados ela possui.");
    printf("\n\n****************************************************************************\n");

//Início do código.
//Recebe as medidas dos lados da sala.
    printf("\nInforme a media do primeiro lado da sala em metros.\n");
    scanf("%f", &ld1);
    printf("\nInforme a medida do segundo lado da sala em metros.\n");
    scanf("%f", &ld2);
//Calcula a área da sala.
    area = (ld1 * ld2);
//Entrega a área da sala.
    printf("\nA sala tem como área a medida de %.2f m².\n\n", area);

return 0;

}    