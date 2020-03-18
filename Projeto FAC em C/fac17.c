/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main (void){
    
    #define TAXA 1.12 //define a variável TAXA como constante e valor de 1.12 (acréscimo de 12%)
    float vlrAtl, vlrAjd;
    char pCento = '%';
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
    printf("\n\n******************************************************************************************\n\n");
    printf("Informe o valor da passagem e mostre o novo valor com base em um reajuste de 12%c.", pCento);
    printf("\n\n******************************************************************************************\n");

//Início do código.
//Recebe o valor da passagem.
    printf("\nQual o valor atual da passagem?\n");
    printf("R$ ");
    scanf("%f", &vlrAtl);
//Calcula o novo valor com base no reajuste informado.
    vlrAjd = vlrAtl * TAXA;
//Entrega o novo valor com o reajuste aplicado.
    printf("\nO novo valor de passagem é R$ %.2f\n\n", vlrAjd);

    return 0;
}
