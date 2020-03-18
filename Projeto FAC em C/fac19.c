/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float salAtual, salNovo, ajuste, taxa;

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
    printf("\n\n*******************************************************************\n\n");
    printf("Informe o valor do salário atual a taxa de variação e o novo valor.");
    printf("\n\n*******************************************************************\n");

//Início do código.

//Recebe o valor do salário inicial.
    printf("\nQual o valor de seu salário atual?\nR$ ");
    scanf("%f", &salAtual);
//Recebe o valor da taxa de variação.
    printf("\nQual o percentual de reajuste?\n");
    scanf("%f", &taxa);
//Calcula o valor da variação e o novo salário.
    ajuste = salAtual * (taxa / 100);
    salNovo = salAtual + ajuste;
//Entrega o novo valor de salario.
    printf("\nSeu novo salário é R$ %.2f.\n\n", salNovo);

    return 0;
}
