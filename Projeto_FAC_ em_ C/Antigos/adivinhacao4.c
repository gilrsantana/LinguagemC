#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINIMO 0
#define MAXIMO 99

int main(void){

    int segundos = time(0);
    srand(segundos);

    int aleatorio = rand();

    int definido = aleatorio % (MAXIMO + 1);
    int chute;
    int nivel;
    int chance;
    int tentativa = 1;
    int acertou = 0;
   
    double ponto = 1000;
 
    printf("\n\n************************************************\n");
    printf("*          __,_,                               *\n");
    printf("*         [_|_/                                *\n");
    printf("*         //                       Bem vindo   *\n");
    printf("*       _//    __                 ao programa  *\n");
    printf("*      (_|)   |@@|                    de       *\n");
    printf("*       \\ \\__ \\--/ __             adivinhação  *\n");
    printf("*        \\o__|----|  |   __                    *\n");
    printf("*            \\ }{ /\\ )_ / _\\                   *\n");
    printf("*            /\\__/\\ \\__O (__                   *\n");
    printf("*           (--/\\--)    \\__/                   *\n");
    printf("*           _)(  )(_                           *\n");
    printf("*          `---''---`                          *\n");
    
    
    printf("************************************************\n");
   

    printf("\nEscolha o nível.\n");
    printf("\n(1)Fácil  (2)Médio  (3)Difícil: ");
    scanf("%d", &nivel);

    while(nivel < 1 || nivel >3){
        printf("ERRO! Escolha um valor 1, 2 ou 3.\n");
        printf("\nEscolha o nível.\n");
        printf("\n(1)Fácil  (2)Médio  (3)Difícil: ");
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


    printf("\nEscolha um número entre %d e %d.\n", MINIMO, MAXIMO);

    for (int i=1; i<=chance; i++){
    printf("\nTentativa %d. Qual é seu chute? ", tentativa);
    scanf("%d", &chute);
    while (chute < MINIMO  || chute > MAXIMO){
        printf("ERRO! Somente são admitidos valores entre %d e %d", MINIMO, MAXIMO);
        printf("\n\nTentativa %d. Qual é seu chute? ", tentativa);
        scanf("%d", &chute);
    }
        acertou = chute == definido;
        
        int maior = chute > definido;

        if(acertou){
            break;
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
    printf("\n                  Fim do jogo.\n\n");

    if(acertou){

        printf("                     @@  @@                              \n");
        printf("                    ,-@@~@-.                            \n");
        printf("    _               (_, O _/                             \n");
        printf("    | Y~.            (__d._)                            \n");
        printf("    | r.|    Y@oooood@@@@@@@@oooo@F                     \n");
        printf("    Y ||   _Y@@@@@@P    V   Y@@@@f                      \n");
        printf("    | t_\\_/ _)@@@@@          @@@@f  __     ,--,         \n");
        printf("     \\  `. / ~@@@@@    . .   @@@@  (_ `---'  ~~)         \n");
        printf("      `-._/)   @@@@b__|@_@|_d@@@    _l,'~   ~~)          \n");
        printf("         (,db   (   _  `-' _   )  ,d@_)---~~~~           \n");
        printf("            Yb.  \\ '|\\____/|` / od@P                     \n");
        printf("             Y@b  \\ | nn  /','d@@P                       \n");
        printf("               Y@b `\\`---'/'od@P                         \n");
        printf("                ~@@@@`---'@@@P~                          \n");
        printf("                 Y@@@@@@@@@~                             \n");
        printf("                  @@@@@@@@                               \n");

        printf("\n");

        printf("           Parabéns você venceu.\n\n");
        printf("Você acertou na %dª tentativa e ", tentativa);
        printf("fez %.1f pontos.\n\n", ponto);
    }else{
        
        printf("                             ______                       \n");
        printf("                            o8%%8888,                    \n");
        printf("                          o88%%8888888.                  \n");
        printf("                         8'-    -:8888b                 \n");
        printf("                        8'         8888                 \n");
        printf("                       d8.-=. ,==-.:888b                \n");
        printf("                       >8 `=` :`=' d8888                \n");
        printf("                       88         ,88888                \n");
        printf("                       88b` `--  ':88888                \n");
        printf("                       888b -==- .:88888                \n");
        printf("                       88888o--:':::8888                \n");
        printf("                       `88888| :::' 8888b               \n");
        printf("                       8888^^'       8888b              \n");
        printf("                      d888           ,%%888b.            \n");
        printf("                     d88%%            %%%%8--'-.          \n");
        printf("                    /88:.__ ,       _%%-' ---  -         \n");
        printf("                        '''::===..-'   =  --.  `        \n");
    

        printf("\n                 Você perdeu. Tente mais uma vez\n\n");


    }
    
 
    
    return 0;
}