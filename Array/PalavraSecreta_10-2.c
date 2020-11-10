
#include <stdio.h>

#define SIZE 27
#define PALAVRA 100

void leCodigo(int array[], int referencia);

int main(void){
    int cod[PALAVRA] = {-1};
    int secreto;
    int i = 0;

    printf("Informe o código secreto ou -1 para sair: ");
    scanf("%i", &secreto);

    while(secreto >= 0){
        cod[i] = secreto;
        printf("Informe o código secreto ou -1 para sair: ");
        scanf("%i", &secreto);
        i++;
    }
    leCodigo(cod, i);
    return 0;
}

void leCodigo(int array[], int referencia){
    char string[SIZE] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i = 0;
    for(; i <= referencia ; i++){
        printf("%c", string[array[i]]);
    }
}
