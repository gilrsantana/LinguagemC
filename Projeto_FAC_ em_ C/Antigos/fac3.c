/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

int base, altura, area;
//Cabeçalho. Nome da instituição. 
    printf("*****   *   ***** ***** ***** *****  ****\n");
    printf("*      * *  *       *   *     *   *    * \n");
    printf("*     *   * *       *   *     *   *    * \n");
    printf("****  ***** ****    *   ****  *****    * \n");
    printf("*     *   * *       *   *     *  *  *  * \n");
    printf("*     *   * *       *   *     *   * * *  \n");
    printf("*     *   * *****   *   ***** *   *  *   \n");


//Cabeçalho da atividade.
    printf("\n\n************************************************************************\n\n");
    printf ("Mostre a área de um retângulo com as dimenções fornecidas pelo usuário.");
    printf("\n\n************************************************************************\n\n");

//Início do código.

    printf ("Qual a medida da base em cm?\n");
    scanf ("%d", &base);
    printf ("\n");
    
    printf ("Qual a medida da altura em cm?\n");
    scanf ("%d", &altura);
    printf ("\n");

    area = ( base * altura);
    
    printf ("A área do retângulo é de %d cm².\n\n" , area);
    return 0;
}