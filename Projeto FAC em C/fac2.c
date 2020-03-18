/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

float grama;
float kilo;
//Cabeçalho. Nome da instituição. 
    printf("*****   *   ***** ***** ***** *****  ****\n");
    printf("*      * *  *       *   *     *   *    * \n");
    printf("*     *   * *       *   *     *   *    * \n");
    printf("****  ***** ****    *   ****  *****    * \n");
    printf("*     *   * *       *   *     *  *  *  * \n");
    printf("*     *   * *       *   *     *   * * *  \n");
    printf("*     *   * *****   *   ***** *   *  *   \n");


//Cabeçalho da atividade.
    printf("\n\n*************************************************************\n\n");
    printf ("Receba o peso de um pacote em gramas e exiba em quilogramas.");
    printf("\n\n*************************************************************\n\n");

//Início do código.

    printf ("Qual o peso do pacote em gramas?\n");
    scanf ("%f", &grama);
    printf ("\n");
    kilo = grama / 1000;
    printf ("Seu pacote de %.0f gramas equivale a %.3f kilogramas.\n\n", grama , kilo );

    return 0;
}
