/* 
 * Faça um programa que receba para cada uma das n (fornecidos pelo usuário) partidas de uma
 * rodada do campeonato municipal de futebol, o código e o número de gols feitos por um dos 
 * times e o código e o número de gols feitos pelo outro time da partida, mostrando, 
 * para cada partida, o código do time vencedor ou a mensagem "empate". 
 */

#include <stdio.h>

int main(void){
    int disputa, codA, codB, golA, golB, i=1;

    printf("Informe a quantidade de partidas: ");
    scanf("%i", &disputa);

    while(i<=disputa){
        printf("Informe o código do time A: ");
        scanf("%i", &codA);
        printf("Informe a quantidade de gols do time A: ");
        scanf("%i", &golA);
        printf("Informe o código do time B: ");
        scanf("%i", &codB);
        printf("Informe a quantidade de gols do time B: ");
        scanf("%i", &golB);

        if(golA == golB){
            printf("**********************************************");
            printf("\nA partida %i terminou em Empate\n\n", i);
        }else{
            if(golA > golB){
                printf("**********************************************");
                printf("\nA partida %i teve como vencedor o time %i\n\n", i, codA);
            }else{
                printf("**********************************************");
                printf("\nA partida %i teve como vencedor o time %i\n\n", i, codB);
            }
        }
        i++;
    }

    return 0;
}