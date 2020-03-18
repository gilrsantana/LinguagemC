/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>


int main(void){

    int pessoa, ref, ajuste, a;
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
    printf("\n\n*************************************************************************************\n\n");
    printf("Verifique com base no número de pessoas quantos ônibus de 15 lugares serão necesários");
    printf("\n\n*************************************************************************************\n\n");

//Início do código.     

    printf("Qual a quantidade de pessoas?\n");
    scanf("%d", &pessoa);
    ref = (pessoa -1) / 15;
    ajuste = ref + 1;
    a = pessoa % 15;
   if (a = 0){
       printf("\nQuantidade de ônibus necessários: %d\n\n", ref);
   }else{

       printf("\nQuantidade de ônibus necessários:  %d\n\n", ajuste);
   }
    
    return 0;
}