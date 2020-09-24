/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float ld1, ld2, area, per;
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
    printf("\n\n*************************************************************\n\n");
    printf("Receba as medidas de uma sala e calcule sua área e perímetro.");
    printf("\n\n*************************************************************\n");

//Início do código.
    printf("\nQual a medida do primeiro lado da sala em metros?\n");
    scanf("%f", &ld1);
    printf("\nQual a medida do segundo lado da sala em metros?\n");
    scanf("%f", &ld2);

    area = (ld1 * ld2);
    per = ( (ld1 * 2) + (ld2 * 2));

    printf("\nA sala tem área de %.2f m² e perímetro de %.2f m.\n\n", area, per);
    
return 0;    

}