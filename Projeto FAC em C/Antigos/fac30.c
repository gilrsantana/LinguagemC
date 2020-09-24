/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int diaSem;
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
    printf("\n\n*****************************************************************************************************************************\n\n");
    printf("Dado um numero entre 1 e 7, imprima se é dia de semana ou final de semana. Assuma que o primeiro dia da semana (1) é domingo.");
    printf("\n\n*****************************************************************************************************************************\n");

//Início do código.  

//Verificando e validando as opções
    while (diaSem < 1 || diaSem > 7){
//Configurando menu de opções
        printf("\n\nEscolha o dia da semana:\n");
        printf("\n1 - Domingo");
        printf("\n2 - Segunda-feira");
        printf("\n3 - Terça-feira");
        printf("\n4 - Quarta-feira");
        printf("\n5 - Quinta-feira");
        printf("\n6 - Sexta-feira");
        printf("\n7 - Sábado\n\n");

        scanf("%d", &diaSem);

//Responendo às opções do menu
        switch (diaSem)
        {
        case 1:
            printf("\nDomingo é final de semana\n");
            break;
        case 2:
            printf("\nSegunda-feira é dia de semana\n");
            break;
        case 3:
            printf("\nTerça-feira é dia de semana\n");
            printf("Delícia! Hoje tem aula de FAC\n");
            break;
        case 4:
            printf("\nQuarta-feira é dia de semana\n");
            break;
        case 5:
            printf("\nQuinta-feira é dia de semana\n");
            break;
        case 6:
            printf("\nSexta-feira é dia de semana\n");
            break;
        case 7:
            printf("\nSábado é final de semana\n");                       
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA! Verifique a opção digitada.\n");
            break;
        }

    }
    return 0;
}    

