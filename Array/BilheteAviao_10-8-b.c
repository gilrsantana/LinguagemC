#include <stdio.h>
#include <locale.h>

#define SIZE 8

void preencheArray(int codigo[], int assento[], float valor[]);
void compraBilhete(int array1[], float array2[], int ref);
int avaliaTarifa(int array[]);
int verificaPosicao(int codigo[], int ref);

int main(void){
    /*
     * C�DIGO 17 - Posi��o 0
     * C�DIGO 48 - Posi��o 1
     * C�DIGO 10 - Posi��o 2
     * C�DIGO 21 - Posi��o 3
     * C�DIGO 96 - Posi��o 4
     * C�DIGO 55 - Posi��o 5
     * C�DIGO 23 - Posi��o 6
     * C�DIGO 16 - Posi��o 7
     */
    int input;
    int tarifa;
    int bancoTarifa[SIZE] = {17,48,10,21,96,55,23,16};
    int assento[SIZE];
    float valor[SIZE];

    setlocale(LC_ALL,"");

    preencheArray(bancoTarifa, assento, valor);
    tarifa = avaliaTarifa(bancoTarifa);
    while(tarifa != 0){
        if(tarifa > 0){
            compraBilhete(assento, valor, tarifa);
        }
        tarifa = avaliaTarifa(bancoTarifa);
    }

    return 0;
}

///////////////////////////////////////////////////////////
void preencheArray(int codigo[], int assento[], float valor[]){
    for(int i = 0; i < SIZE; i++){
        printf("Informe o valor da tarifa %i: ", codigo[i]);
        scanf("%f", &valor[i]);
        printf("Informe a quantidade dispon�vel da tarifa %i: ", codigo[i]);
        scanf("%i", &assento[i]);
    }
    return;
}

///////////////////////////////////////////////////////////
void compraBilhete(int array1[], float array2[], int ref){
    int qtd;
    int pos;
    float compra;

    pos = verificaPosicao(array1, ref);
    if(array1[pos] == 0){
        printf("\nN�o h� assentos dispon�veis\n");
    }else{
        printf("\nInforme a quantidade de bilhetes desejada: ");
        scanf("%i", &qtd);

        if(qtd <= array1[pos]){
            compra = array2[pos] * qtd;
            array1[pos]-=qtd;
            printf("Valor da compra ... R$ %.2f\n\n", compra);
        }else{
            printf("Compra n�o efetuada.\n");
            printf("Quantidade dispon�vel � de %i assentos.\n", array1[pos]);
        }
    }
    return;
}

///////////////////////////////////////////////////////////
int avaliaTarifa(int array[]){
    int saida = 0;
    int input;
    printf("\nInforme o c�digo da tarifa desejada ou 0 para sair: ");
    scanf("%i", &input);
    for(int i = 0; i < SIZE; i++){
        if(input == array[i]){
            saida = input;
        }
    }
    return saida;
}
///////////////////////////////////////////////////////////
int verificaPosicao(int codigo[], int ref){
    for(int i = 0; i < SIZE; i++){
        if(ref == codigo[i]){
            return i;
        }
    }
}
