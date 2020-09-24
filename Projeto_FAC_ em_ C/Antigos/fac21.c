/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>


int main (void){

    #define IMPOSTO 0.03 //Define a variável IMPOSTO como constante e valor de 0,03.
    float salMin, hRef, hTrab, hReceb, salBto, salLiq;
    char pCento ='%';

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
    printf("\n\n***************************************************************************\n\n");
    printf("Informe o valor do salário mínimo, quantidade de horas trabalhadas, \ncalcule o salário bruto, deduza 3%c de imposto e entregue o salário líquido.", pCento);
    printf("\n\n***************************************************************************\n");

//Início do código.

//Recebe o valor do salário mínimo.
    printf("\nInforme o valor do salário mínimo.\nR$ ");
    scanf("%f", &salMin);
//Recebe a quantidade de horas trabalhadas.        
    printf("\nInforme a quantidade de horas trabalhadas.\n");
    scanf("%f", &hTrab);
//Define a referência de hora trabalhada como metade do salário mínimo.
    hRef = salMin / 2;
//Calcula o salário bruto.    
    salBto = hRef * hTrab;
//Calcula salário líquido.
    salLiq = (( salBto ) - (salBto * IMPOSTO));    
//Entrega os valores de salário bruto e salário líquido.
    printf("\nO salário bruto é R$ %.2f e o salário líquido é R$ %.2f.\n\n", salBto, salLiq);

    return 0;

}
