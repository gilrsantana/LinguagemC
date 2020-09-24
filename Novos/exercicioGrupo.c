#include <stdio.h>

int criaNumero(int x, int y);

int main(void){

    int dia, mes, ano, parte1, parte2, senha;

    printf("informe o dia de nascimento: ");
    scanf("%i", &dia);
    while(dia < 1 || dia > 31){
        printf("ERRO! Digite valores entre 1 e 31\n");
        printf("informe o dia de nascimento: ");
        scanf("%i", &dia);
    }
    printf("informe o mes de nascimento: ");
    scanf("%i", &mes);
    while(mes < 1 || mes > 12){
        printf("ERRO! Digite valores entre 1 e 12\n");
        printf("informe o dia de nascimento: ");
        scanf("%i", &mes);
    }
    printf("informe o ano de nascimento: ");
    scanf("%i", &ano);
    
    parte1 = criaNumero(mes, dia);
    parte2 = criaNumero(dia, mes);
    senha = parte1 + parte2 + ano;

    printf("A senha do usuário é %i.\n", senha);


    return 0;
}

int criaNumero(int x, int y){

    int senha = x * 100 + y;

    return senha;
}