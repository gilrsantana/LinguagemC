/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

int comp, cons, saldo;

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
    printf("Calcule a quantidade de caixas compradas e consumidas em uma festa.");
    printf("\n\n*******************************************************************\n");

//Início do código.    
    printf ("\nEscreva a quantidade de caixas compradas:  \n");
    scanf ("%d" , &comp);

    printf ("\nEscreva a quantidade de caixas consumidas:  \n");
    scanf ("%d" , &cons);

    saldo = comp - cons;

    while(saldo < 0) {
                
        printf ("\nERRO! A quantidade de caixas consumidas é maior que a quantidade de caixas compradas.");
        printf ("\nVerifique os valores das entradas.\n");

        printf ("\nEscreva a quantidade de caixas compradas:  \n");
        scanf ("%d" , &comp);

        printf ("\nEscreva a quantidade de caixas consumidas:  \n");
        scanf ("%d" , &cons);

        saldo = comp - cons;

    }  

    printf ("\nA quantidade que sobrou é de %d caixa(s)." , saldo);

    printf ("\n\n");
    return 0;
}

