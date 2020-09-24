/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 23-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int codigo;    
    float xx, yy, valor, desconto, total;

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
    printf("\n\n********************************************************\n\n");
    printf("Receba o código do produto e entregue o seu valor final.");
    printf("\n\n********************************************************\n");

//Início do código.
//Recebe o código do produto.
    printf("\nInforme o código do produto de 4 dígitos.\n");
    scanf("%d", &codigo);

    while(codigo > 9999 )
    {
        printf("\nERRO! VERIFIQUE OS VALORES.\n");
        printf("São admitidos apenas códigos de 4 dígitos.");
        printf("\n\nInforme novamente o código do produto atentando para os 4 dígitos.\n");
        scanf("%d", &codigo);
    }
//Separa o código em duas partes.
    xx = codigo / 100; //Separa os dois primeiros dígitos do código.
    yy = codigo % 100; //Separa os dois últimos dígitos do código.

//Cálculo dos valores.    
    valor = xx * 15 + yy;
    desconto = yy / 100;
    total = valor - (valor * desconto);

//entrega o resultado do valor do produto.    
    printf("\nO valor total do produto é R$ %.2f\n", total);

    return 0;
}
