#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINIMO 0
#define MAXIMO 99

int main(void){

    int segundo = time(0);
    srand(segundo);

    int aleatorio = rand();

    int definido = aleatorio % (MAXIMO + 1);

    int nivel;
    int chance; 
    int chute;
    int tentativa = 1;
    float ponto = 1000.0;
    int perdido;

    int acertou = 0;

    printf("Bem vindo ao jogo de adivinhação\n\n");

    printf("Escolha o nível.\n");
    printf("(1) Fácil (2) Médio (3) Difìcil: ");
    scanf("%d", &nivel);

    while(nivel < 1 || nivel > 3){
        printf("\n\nERRO!  Escolha valores entre 1 e 3\n");
        printf("Escolha o nível.\n");
        printf("(1) Fácil (2) Médio (3) Difìcil: ");
        scanf("%d", &nivel);
    }

    switch(nivel){
        case 1:
        chance = 20;
        break;

        case 2:
        chance = 10;
        break;

        case 3:
        chance = 6;
        break;
    }

    printf("Escolha um número entre %d e %d.\n\n", MINIMO, MAXIMO);
    
    for(int i = 1; i <= chance; i++){
        printf("\nTentativa %d de %d. Escolha o número:  ", tentativa, chance);
        scanf("%d", &chute);

    while(chute < MINIMO || chute > MAXIMO){
        printf("\n\nERRO! Valor fora do especificado.\n");
        printf("\nEscolha um número entre %d e %d.\n", MINIMO, MAXIMO);
        printf("\nTentativa %d de %d. Escolha o número:  ", tentativa, chance);
        scanf("%d", &chute);
    }

    acertou = chute == definido;
    int acima = chute > definido;

    if(acertou){
        break;
    }else if(acima){
        printf("Seu chute foi muito ALTO.\n");
    }else{
        printf("Seu chute foi muito BAIXO.\n");
    }

    tentativa++;

    perdido = abs(chute - definido) / (double)2;
    ponto = ponto - perdido;        

    }

    printf("\n\n           Fim do jogo.\n\n");

    if(acertou){
        printf("      Parabens você ganhou.\n");
        printf("Você acertou na %dª tentativa ", tentativa);
        printf("e fez %.1f pontos\n\n", ponto);
    }else{
        printf("Sinto muito... Você perdeu.\n");
        printf("     Tente outra vez.\n\n");
    }

    return 0;
}