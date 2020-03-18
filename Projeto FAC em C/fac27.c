/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

int idade, ajuste;

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
    printf("\n\n*****************************************************************************************\n\n");
    printf("Faça um programa em C que capture a idade de uma pessoa e verifique se pode ou não votar.");
    printf("\n\n*****************************************************************************************\n");

//Início do código.    
printf("\nQual sua idade no ano atual?\n");
scanf("%d", &idade);

if(idade < 16) {
   
    ajuste = ( (16 - idade) + 2020);
    printf("\n\nAguarde mais um pouco. Você poderá votar em %d.\n", ajuste);
    printf("Seu perfil é NÃO ELEITOR!\n\n");

    }else if (idade >= 18 && idade <= 70) {
        printf("\n\nVocê é obrigado a votar.\n");
        printf("Seu perfil é ELEITOR OBRIGATÓRIO!\n\n");

    }else {
        printf("\n\nVocê tem a opção de votar.\n");
        printf("Seu perfil é ELEITOR FACULTATIVO!\n\n");
    }
    return 0;
}

