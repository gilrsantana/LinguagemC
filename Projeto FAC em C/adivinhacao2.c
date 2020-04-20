#include <stdio.h>

#define MINIMO 1
#define MAXIMO 50

int main(void){

    int definido = 38;
    int chute;
    int tentativa = 1;
    int ganhou = 0;

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
        
    }
    printf("\nFim do jogo.\n");
    printf("Você acertou na %dª tentativa.\n\n", tentativa-1);
    return 0;
}