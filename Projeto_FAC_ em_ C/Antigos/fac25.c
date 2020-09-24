/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

int idade, altura;
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
    printf("\n\n********************************************************************************************************\n\n");
    printf("Verifique se uma pessoa está liberada para usar um brinquedo de acordo com requisitos de idade e altura.");
    printf("\n\n********************************************************************************************************\n");

//Início do código. 
//Recebe idade da pessoa.
    printf("\nQual sua idade?\n");
    scanf("%d", &idade);

    if(idade < 18){//Se menor de 18 anos pergunte altura.
        printf("\nQual sua altura em cm?\n");
        scanf("%d", &altura);
            if(idade < 18 && altura < 150){//Se menor de 18 anos e menor de 150cm NÃO LIBERADO.
                printf("\nVOCÊ NÃO ESTÁ LIBERADO!\n");
            }else if(idade < 18 && altura >= 150){//Se menor de 18 anos e maior igual a 150cm LIBERADO.
                printf("\nVOCÊ ESTÁ LIBERADO!\n");
            }
    }else if(idade >= 65){//Se maior ou igual a 65 liberado com ressalvas.
        printf("\nVOCÊ ESTÁ LIBERADO! Cuidado com a velocidade.\n");
    }else{//Qualquer outra situação LIBERADO.
        printf("\nVOCÊ ESTÁ LIBERADO!!!\n");
    }
    return 0;
}    