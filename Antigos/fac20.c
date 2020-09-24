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
    int difAno, difAno_1; 

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
    printf("\n\n**********************************************************************\n\n");
    printf("Receba a informação da data de nascimento e calcule a idade da pessoa.");
    printf("\n\n**********************************************************************\n");

//Início do código. 
//Receba a data de nascimento. É preciso atentar para preencher a data colocando também a "/".   
    printf("\nQual sua data de nascimento? (Formato dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &diaNas, &mesNas, &anoNas);

//Receba a data atual. É preciso atentar para preencher a data colocando também a "/".
    printf("\nInforme a data atual. (Formato dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);    

//Compara os anos para ter a referência de idade.
    difAno = ano_atual - anoNas;
    difAno_1 = ( (ano_atual - anoNas) - 1 );
    
//Faz a diferenciação entre a data do ano antes do aniversário e depois
  
    if ( (mes_atual <= mesNas) && (dia_atual < diaNas)) //Se data antes do aniversário, diminui uma unidade
        {
        printf("\nVocê tem %d anos.\n\n", difAno_1);
        }
     else {   //Se data igual ou posterior a data de aniversário faz uma diminuição simples.
        printf("\nVocê tem %d anos.\n\n", difAno);
      
    }
        

    return 0;    

}

    


