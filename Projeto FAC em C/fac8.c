/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int diaRet, diaEnt, qtdDia;

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
    printf("\n\n************************************************************************************************************************\n\n");
    printf("Faça um algoritmo que obtenha as datas de retirada e entrega de um livro e informe quatos dias o livro ficou emprestado.");
    printf("\n\n************************************************************************************************************************\n");

//Início do código. 
//Recebe o dia de retirada do livro.
    printf("Informe o dia do mês que o livro foi retirado.\n");
    scanf("%i", &diaRet);
 //Se a data estiver fora das especificações pede os valores novamente.   
    while (diaRet < 1 || diaRet >31){
        printf("\nERRO! Verifique os valores das datas. Certifique-se de escolher um valor entre 1 e 31.\n\n");
        printf("Informe o dia do mês que o livro foi retirado.\n");
        scanf("%i", &diaRet);
    }
//Recebe o dia de entrega do livro.
    printf("\nInforme o dia do mês que o livro foi entregue.\n");
    scanf("%i", &diaEnt);
//Se a data estiver fora das especificações pede os valores novamente.
    while (diaEnt > 31 || diaEnt < 1){
        printf("\nERRO! Verifique os valores das datas. Certifique-se de escolher um valor entre 1 e 31.\n\n");
        printf("\nInforme o dia do mês que o livro foi entregue.\n");
        scanf("%i", &diaEnt);
    }

    qtdDia = ( (diaEnt - diaRet ) + 1);
/*
*Compara os valores e especificações das datas e caso a retirada seja maior que a entrega,
*pede os valores novamente.
*/
    while (diaEnt < diaRet || diaRet < 1 || diaEnt > 31){
        printf("\nCertifique-se de que o dia de entrega do livro seja maior ou igual ao dia da entrega.\n");
        printf("Certifique-se também de escolher uma dada entre 1 e 31.\n\n");
        printf("Informe o dia do mês que o livro foi retirado.\n");
        scanf("%i", &diaRet);
        printf("\nInforme o dia do mês que o livro foi entregue.\n");
        scanf("%i", &diaEnt);
    }
//Recalcula os valores conforme as novas informações de entrega e retirada.    
    qtdDia = ( (diaEnt - diaRet ) + 1);

//Imprime o resultado final na tela.
    printf("\nO aluno ficou %i dias com o livro.\n", qtdDia);

return 0;

}