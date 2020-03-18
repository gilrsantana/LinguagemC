/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int pessoa, a;
    int referencia, ajuste, final;
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
    printf("Considerando que cada pessoa comsome 500mL de água, verifique quantos garrafões de 5L serão necessaŕios.");
    printf("\n\n********************************************************************************************************\n");

//Início do código.   
//Recebe quantidade de pessoas.  
    printf("\nQual a quantidade de pessoas na festa?\n");
    scanf("%d", &pessoa);

//Ajusta a quantidade de água necessária.
    referencia = pessoa * 500;
    ajuste = (referencia)/ 5000;
    a = (referencia % 5000);

    if( a == 0){//se a divisão é exata executa o valor direto.
        printf("\nSerão necessários %d garrafões de 5L\n", ajuste);
    }else{//Se a divisão não é exata arredonda 1 unidade para cima.
        final = (ajuste + 1);
        printf("\nSerão necessários %d garrafões de 5L\n", final);
    }
    return 0;
}