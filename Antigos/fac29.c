/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

int gol1, gol2;

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
    printf("\n\n******************************************************************************************************\n\n");
    printf("Faça um programa que capture os gols dos time1 e time2 exibindo o número do time que ganhou ou empate.");
    printf("\n\n******************************************************************************************************\n");

//Início do código.

//Recebe gols do times 1 e time 2.
    printf("\n\nQuantos gols fez o time 1?\n");
    scanf("%d", &gol1);

    printf("Quantos gols fez o time 2?\n");
    scanf("%d", &gol2);

//Verifica os valores recebidos e condiciona a três opções de saída.
    if (gol1 > gol2){
        printf("\n\nParabéns time 1! Você venceu a partida com o placar de %d a %d.\n\n", gol1, gol2);

    }else if (gol2 > gol1){
        printf("\n\nParabens time 2! Você venceu a partida com o placar de %d a %d.\n\n", gol2, gol1);

    }else{
        printf("\n\nO jogo terminou empatado com o placar de %d a %d.\n\n", gol1, gol2);
    }
    return 0;
}