/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>
#include <time.h>

int main(void){

    int diaNas, mesNas, anoNas;
    int dia_atual, mes_atual, ano_atual;
    int difAno; 

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
    printf("\n\n*******************************************************************\n\n");
    printf("Receba a informação da data de nascimento, compare com a data atual \ne informe se pode viajar sem autorização.");
    printf("\n\n*******************************************************************\n");

//Início do código. 
//Receba a data de nascimento. É preciso atentar para preencher a data colocando também a "/".   
    printf("\nQual sua data de nascimento? (Formato dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &diaNas, &mesNas, &anoNas);
//Receba a data atual. É preciso atentar para preencher a data colocando também a "/".
    printf("\nInforme a data atual. (Formato dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);    

//Compara os anos para ter a referência de 12.
    difAno = ano_atual - anoNas;
    
/*
A sequencia abaixo mostra diversas condições de datas para informar três condições:
1 - Se é menor de 12 anos: precisará de liença para viajar;
2 - Se tem 12 anos completos e 18 anos incompletos: não precisará de licença para viajar;
3 - Se tem 18 anos completos ou mais: poderá viajar sem licença, é maior de idade.
*/    
    if (( difAno == 12 ) && (mes_atual == mesNas) && (dia_atual < diaNas)) 
        {
        printf("\nVocê precisará de licença do juizado para viajar.\n");
        }
        else if ( ( difAno == 12 ) && (mes_atual > mesNas) ) {
            printf("\nVocê precisará de licença do juizado para viajar.\n");  
        }
        else if (difAno < 12) {
            printf("\nVocê precisará de licença do juizado para viajar.\n");
        }
        else if( (difAno > 12 && difAno < 18)  || ( (difAno == 12) && (mes_atual == mesNas) && (dia_atual >= diaNas) ) ){
            printf("\nVocê NÃO precisará de licença do juizado para viajar.\n");
        }
        else if( (difAno == 18) && (mes_atual == mesNas) && (dia_atual < diaNas)){
            printf("\nVocê NÃO precisará de licença do juizado para viajar.\n");
        }
        else {
        printf("\nVocê poderá viajar sem licença.");
        printf(" Você é maior de idade. Boa Viagem!\n\n");
    }
        

    return 0;    

}

    


