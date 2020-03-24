/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 23-03-2020
 *
 */
#include <stdio.h>

int main(void){

    int diaEvento, dia, semana;

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
    printf("\n\n******************************************************************************************\n\n");
    printf("Receba a quantidade de dias de duração do evento e entregue o resultado em dias e semanas.");
    printf("\n\n******************************************************************************************\n");

//Início do código.
//Recebe a quantidade de dias do evento.
    printf("\nQuantos dias durou o evento?\n");
    scanf("%d", &diaEvento);
//Resolve a quantidade de semanas.
    semana = diaEvento / 7;
//Resolve a quantidade de dias
    dia = diaEvento % 7;
//Condiciona as respostas apresentadas de acordo com o ajuste de dias e semanas.
    if(dia == 0){
        printf("\nO evento durou %d semana(s).\n", semana);
        }else if(semana < 1){
            printf("\nO evento durou %d dia(s).\n", dia);
        }else{
        printf("\nO evento durou %d semana(s) e %d dia(s).\n", semana, dia);
        }
   

   return 0;
}
    
