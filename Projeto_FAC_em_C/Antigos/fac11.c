/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int n, ant, suc;
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
 printf("\n\n********************************************************************\n\n");
    printf("Informe um número inteiro e calcule seu sucessor e seu antcessor.");
    printf("\n\n*****************************************************************\n");

//Início do código. 
//Recebe o número inteiro.
    printf("\nInforme um número inteiro.\n");
    scanf("%i", & n);
//Calcula antecessor e o sucessor.
    ant = n - 1;
    suc = n + 1;
//Entrega o resultado.
    printf("\nO número %i tem como antecessor o número %i e sucessor o número %i.\n\n", n, ant, suc);

return 0;
}