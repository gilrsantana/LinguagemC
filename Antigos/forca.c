#include <stdio.h>
#include <string.h>

int main(void){

    char palavraSecreta[20];
    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int errou = 1;

    do{
        char chute;
        scanf("%c", &chute);

        for(int i = 0; i < strlen(palavraSecreta); i++){
            if(chute == palavraSecreta[i]){
                printf("a posição %d tem essa letra!\n", i);
            }
        }


    }while(!acertou && !errou);

    return 0;
}