/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float compra, qtdPar, vlrPar, ent;
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
    printf("\n\n***********************************************************************************************************\n\n");
    printf("Através do valor informado da compra e da quantidade de parcelas informe o valor da entrada e das parcelas.");
    printf("\n\n***********************************************************************************************************\n");

//Início do código.
//Recebe o valor da compra.
    printf("\nSenhor cliente, Agradecemos sua preferência.\nPor favor informe o valor de sua compra.\n");
    scanf("%f", &compra);
//Recebe a quantidade de parcelas.
    printf("\nPor último, em quantas vezes o senhor pretende parcelar?\n");
    scanf("%f", &qtdPar);
//Calcula os valores de entrada e de parcela.
    vlrPar = ( (compra * 0.7) / qtdPar);
    ent = (compra * 0.3);
//Entrega os valores de entrada, quantidade de parcelas e valor das parcelas.
    printf("A compra no valor de R$ %.2f terá como entrada o valor de %.2f e terá %.0f parcelas no valor de R$ %.2f cada.\n\n", compra, ent, qtdPar, vlrPar);

return 0;
}