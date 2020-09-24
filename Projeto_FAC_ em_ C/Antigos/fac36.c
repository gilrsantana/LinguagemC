/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main (void){

    float av1, av2, av3; //Notas do aluno
    float mediaA; //Média aritmética
    float mediaP; //Média ponderada
    int dig;

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
    printf("\n\n**************************************************************************************\n\n");
    printf("Verifique com base no dígito verificador da disciplina (par ou ímpar) a média do aluno");
    printf("\n\n**************************************************************************************\n\n");

//Início do código.         

    printf("\nInforme o dígito verificador de sua disciplina: (código - dígito verificador)\n");
    scanf("%d", &dig);

//Se dígito par recebe as notas e executa média ponderada.
    if (dig % 2 == 0){                          
        printf("\nInforme a nota de AV1:\n");
        scanf("%f", &av1);
        printf("\nInforme a nota de AV2: \n");
        scanf("%f", &av2);
        printf("\nInforme a nota de AV3: \n");
        scanf("%f", &av3);

        mediaP = ( ( (av1 *1) + (av2 * 2) + (av3 * 2)) / 5 );

        printf("\nSua média final é: %.2f\n\n", mediaP);
//Se dígito ímpar recebe as notas e executa média aritmética.        
    }else{                                       
        printf("\nInforme a nota de AV1:\n");
        scanf("%f", &av1);
        printf("\nInforme a nota de AV2: \n");
        scanf("%f", &av2);
        printf("\nInforme a nota de AV3: \n");
        scanf("%f", &av3);

        mediaA = (av1 + av2 + av3) / 3;

        printf("\nSua média final é: %.2f\n\n", mediaA);

    }
    return 0;
    }