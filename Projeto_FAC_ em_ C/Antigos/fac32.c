/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int fil;
    float sal;
    float salAjtd;

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
    printf("\n\n********************************************************************************************\n\n");
    printf("Verifique com base no salário e número de filhos se um funcionário tem direito ao benefício.");
    printf("\n\n********************************************************************************************\n");

//Início do código.  
//Recebe salário atual.
    printf("\nQual o valor de seu salário atual?\n");
    scanf("%f", &sal);
    
//Recebe quantidade de filhos.
    printf("Quantos filhos você tem atualmente?\n");
    scanf("%d", &fil);

//Avalia as entradas e entrega a saída.
    if (sal < 500 && fil > 3){
        salAjtd = sal * 1.3;
        printf("\nVocê tem direito ao benefício e seu novo salário será R$ %.2f\n\n", salAjtd);
    }else {
        printf("\nVocê não atende aos requisitos para ter direito ao benefício.\n");
        printf("Seu salário precisa ser inferior a R$ 500,00 e você precisa ter mais de três filhos.\n\n");
    }
    return 0;
}