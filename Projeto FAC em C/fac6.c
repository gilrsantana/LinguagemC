/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float av1, av2, media;
    float peso1 = 3;
    float peso2 = 7;
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
    printf("\n\n****************************************************************************************************\n\n");
    printf("Faça um algoritmo que receba as notas de um aluno e calcule sua média de acordo co o peso das notas.");
    printf("\n\n****************************************************************************************************\n");

//Início do código. 
//Recebe os valores das notas.
    printf("Informe o valor de sua primeira nota.\n");
    scanf("%f", &av1);
    printf("\nInforme o valor de sua segunda nota.\n");
    scanf("%f", &av2);
    
//Calcula média do aluno.
    media = ( ( (av1 * peso1) + (av2 * peso2) ) / (peso1 + peso2));

    printf("\nSua média final é %.2f.\n", media);

    return 0;

}