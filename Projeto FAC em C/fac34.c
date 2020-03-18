/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    float minCtd, minUsd, minBnf, minRtd;
    char pct = '%';
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
    printf("Verifique com base no plano e franquia utilizada se o cliente tem direito ao bônus de 50%c.", pct);
    printf("\n\n********************************************************************************************\n");

//Início do código.  
    printf("\nSeu plano atual contempla quantos minutos?\n");
    scanf("%f", &minCtd);
    printf("\nQuantos minutos do seu plano você utilizou?\n");
    scanf("%f", &minUsd);
        
    if( minUsd < (minCtd * 0.3) ){
        minBnf = minCtd * 0.5;
        minRtd = minCtd + minBnf;
        printf("\nVocê tem direito ao benefício de %.0f minutos, totalizando %.0f minutos para o próximo mês.\n\n", minBnf, minRtd);
       
    }else{
        printf("\nVocê não tem direito ao benefício, pois você já atingiu a franquia de 30%c de seu plano.\n", pct);
        printf("Utilize menos de 30%c de seu plano no próximo mês para ter direito ao benefício.\n\n", pct);
    }
    return 0;
}