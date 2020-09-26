/*
 * No jogo de Pedra, Papel, Tesoura, os jogadores devem simultaneamente esticar a mão , 
 * na qual cada um formou um símbolo (que significa pedra , papel ou tesoura ). 
 * Então, os jogadores comparam os símbolos para decidir quem ganhou, da seguinte forma:
 * 
 * Pedra ganha da tesoura (amassando-a ou quebrando-a).
 * Tesoura ganha do papel (cortando-o).
 * Papel ganha da pedra (embrulhando-a).
 * 
 * A pedra é simbolizada por um punho fechado; a tesoura, por dois dedos esticados; e o papel, 
 * pela mão aberta. Caso dois jogadores façam o mesmo gesto, ocorre um empate , e geralmente se 
 * joga de novo até desempatar.
 * Faça um programa que implemente o jogo com n(lido) partidas entre uma pessoa e o computador. 
 * O jogador digita 1 para Pedra, 2 para Tesoura e 3 para Papel.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define PEDRA 1
#define TESOURA 2
#define PAPEL 3

int main(void){
    int escolha, partida, computador, jogador, vencedor=0, empatada=0;
    srand(time(NULL));
    printf("Quantas partidas deseja? ");
    scanf("%i", &partida);
    
    for(int i=1; i <= partida; i++){
        printf("PARTIDA %i\n", i);
        printf("Faça sua escolha:\n");
        printf("PEDRA = 1 / TESOURA = 2 / PAPEL = 3: ");
        scanf("%i", &escolha);
        while(escolha < 1 || escolha > 3){
                printf("ERRO! Digite um valor entre as opções apresentadas\n");
                printf("PEDRA = 1 / TESOURA = 2 / PAPEL = 3: ");
                scanf("%i", &escolha);
        }   
        computador = rand()%4;
        while(computador == 0){
            computador = rand()%4;
        }
        printf("Computador = %i\n", computador);
        if((computador == 1 && escolha == 2) || (computador == 2 && escolha == 3) || (computador == 3 && escolha == 1)){
            printf("\nCOMPUTADOR venceu!\n\n");

        }else if(computador == escolha){
            printf("\nEMPATE!\n\n");
            empatada++;
        }else{
            printf("\nJOGADOR venceu!\n\n");
            vencedor++;
        }
    }   
    if(empatada > 0){
        printf("Foram realizadas %i partidas, sendo %i empatadas e você venceu %i\n\n.", partida, empatada, vencedor);
    }else{
        printf("Foram realizadas %i partidas e você venceu %i\n\n.", partida, vencedor);
    }
    return 0;
}