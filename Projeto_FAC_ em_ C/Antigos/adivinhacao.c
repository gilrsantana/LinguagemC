#include <stdio.h>

#define MINIMO 1
#define MAXIMO 50

int main(void){

    int definido = 38;
    int chute;
    int chance = 5;
   

    printf("\n******************************************\n");
    printf("** Bem Vindo ao programa de adivinhação **\n");
    printf("******************************************\n");

    printf("\nEscolha um número entre %d e %d.\n", MINIMO, MAXIMO);

    for (int i = 1; i <= chance; i++){
    printf("\nTentativa %d de %d. Qual é seu chute?: \n", i, chance);
    scanf("%d", &chute);
    while (chute < MINIMO  || chute > MAXIMO){
        printf("ERRO! Somente são admitidos valores entre %d e %d", MINIMO, MAXIMO);
        printf("\nTentativa %d de %d. Qual é seu chute?: \n", i, chance);
        scanf("%d", &chute);
    }
    int acertou = (chute == definido);
    int maior = chute > definido;

        if(acertou){
            printf("Parabéns. Voce acertou!\n");
            break;
        }else
        {
               
            if(maior){
                printf("Tente mais uma vez. Seu chute foi muito alto.\n");
            }else{
                printf("Tente mais uma vez. Seu chute foi muito baixo.\n");
            }
        }
       
        
    }
    printf("Fim do jogo.\n");
    return 0;
}