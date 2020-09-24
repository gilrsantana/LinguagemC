/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int altPess, altM;
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
    printf("\n\n*************************************************************************************************\n\n");
    printf("Faça um algoritmo que obtenha a altura da pessoa em centímetros e entregue em metro e centímetro.");
    printf("\n\n*************************************************************************************************\n");

//Início do código. 
//Recebe o valor da altura em cm.
    printf("Informe sua altura em centímetros.\n");
    scanf("%i", &altPess);
    altM = 0;
//Separa os valores de cm e m.    
    while (altPess >= 100) {
        altPess = altPess - 100;
        altM = altM + 1;
        
    }
//Impreme na tela os valores encontrados.    
    printf("\nSua altura é %i metros e %i centímetros.\n\n", altM, altPess);

return 0;
}
