/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){
    float vlrNovo, vlrAnt, taxa;
    char pCento= '%';

    
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
    printf("\n\n**************************************************************\n\n");
    printf("Informe o valor da passagem antigo e novo e mostre o reajuste.");
    printf("\n\n**************************************************************\n");

//Início do código.    
    printf("\nQual o antigo valor da passagem?\nR$ ");
    scanf("%f", &vlrAnt);

    printf("\nQual o novo valor da passagem?\nR$ ");
    scanf("%f", &vlrNovo);

    taxa = (((vlrNovo - vlrAnt) / vlrAnt ) * 100);

    printf("\nO reajuste foi de %.2f%c.\n\n", taxa, pCento);

    return 0;
}
