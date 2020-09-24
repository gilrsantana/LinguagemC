/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

float tempC, tempF;

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
    printf("\n\n*******************************************************************************************************************\n\n");
    printf("Faça um algoritmo que transforme uma temperatura  na escala Celsius (C)  para a correspondente  em Fahrenheit  (F).");
    printf("\n\n*******************************************************************************************************************\n");

//Início do código.    

    printf ("\nQual a temperatura em Celsius?\n");
    scanf ("%f", &tempC);

    tempF = ( (9 * tempC) / 5 + 32);

    printf ("\nA temperatura %.1f° Celsius enquivale a %.1f° Farenheit.\n\n", tempC,tempF);
    return 0;
}