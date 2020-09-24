/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float altQd, baseQd, qtdMad;
    float vlrMad = 0.05;
    float vlrFinal;

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
    printf("\n\n******************************************************************************************************************\n\n");
    printf("Faça um algoritmo que recebaas medidas de um quadro e com o valor da madeira entregue a quanidade e o valor final.");
    printf("\n\n******************************************************************************************************************\n");

//Início do código.    

    printf("Informe a medida da base do quadro em cm.\n");
    scanf("%f", &baseQd);
    printf("\nInforme a medida da altura do quadro em cm.\n");
    scanf("%f", &altQd);

    qtdMad = ( (baseQd *2) + (altQd * 2));
    vlrFinal = ( qtdMad * vlrMad);

    printf("\nSerão necessários %.2fcm de madeira e o custo final será R$ %.2f.\n", qtdMad, vlrFinal);

    return 0;
}