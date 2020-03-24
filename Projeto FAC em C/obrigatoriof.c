/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 23-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float concentrado, refresco, suco;
    float vlrSuco, vlrRefresco;

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
    printf("\n\n**********************************************************************************************\n\n");
    printf("Receba a quantidade de concentrado e entregue o rendimento e o faturamento de suco e refresco.");
    printf("\n\n**********************************************************************************************\n");

//Início do código.

//Recebe a quantidade de concentrado em litros. Admite quantidade fracionada.
    printf("\nQual a quantidade de concentrado? (em litros)\n");
    scanf("%f", &concentrado);

    refresco = concentrado * 5.0; //Rendimento refresco = 1pt concentrado p/ 4pt água.
    suco = concentrado * 3.0; //Rendimento suco = 1pt concentrado p/ 2pt água.

    vlrRefresco = (refresco * 1.00) * 10.0; //Valor refresco R$1,00 copo 100ml.
    vlrSuco = (suco * 2.00) * 10.0; //Valor suco R$ 2,00 copo 100ml.

//Entrega resultado com qtd de suco, refresco e o faturamento de cada um.
    printf("\n%.2f litro(s) de concentrado produz %.2f litros de refresco faturando R$%.2f ", concentrado, refresco, vlrRefresco);
    printf("\nou\n");
    printf("%.2f litro(s) de concentrado produz %.2f litros de suco faturando R$%.2f\n\n", concentrado, suco, vlrSuco);

    return 0;
}
