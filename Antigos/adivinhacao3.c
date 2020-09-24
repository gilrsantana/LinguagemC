#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINIMO 0
#define MAXIMO 99

int main(void){

    int segundos = time(0);
    srand(segundos);

    int aleatorio = rand();

    int definido = aleatorio % 100;
    int chute;
    int tentativa = 1;
    int ganhou = 0;
    double ponto = 1000;

    printf("\n******************************************\n");
    printf("** Bem Vindo ao programa de adivinhação **\n");
    printf("******************************************\n");

    printf("\nEscolha um número entre %d e %d.\n", MINIMO, MAXIMO);

    while (ganhou == 0){
    printf("\nTentativa %d. Qual é seu chute?: \n", tentativa);
    scanf("%d", &chute);
    while (chute < MINIMO  || chute > MAXIMO){
        printf("ERRO! Somente são admitidos valores entre %d e %d", MINIMO, MAXIMO);
        printf("\nTentativa %d. Qual é seu chute?: \n", tentativa);
        scanf("%d", &chute);
    }
    int acertou = chute == definido;
    int maior = chute > definido;

        if(acertou){
            printf("Parabéns. Voce acertou!\n");
            ganhou = 1;
        }else
        {
            if(maior){
                printf("Tente mais uma vez. Seu chute foi muito alto.\n");
            }else{
                printf("Tente mais uma vez. Seu chute foi muito baixo.\n");
            }
        }
       tentativa++;
       double perdido = abs(chute - definido) / (double)2;
       ponto = ponto - perdido;
            
    }
    printf("\nFim do jogo.\n");
    printf("Você acertou na %dª tentativa.\n", tentativa-1);
    printf("Você fez %.1f pontos\n\n", ponto);
    
    return 0;
}