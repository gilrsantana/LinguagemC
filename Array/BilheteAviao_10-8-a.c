#include <stdio.h>
#include <locale.h>

#define SIZE 8

void preencheArray(int array1[], float array2[]);
void compraBilhete(int array1[], float array2[], int ref);

int main(void){
    int tarifa;
    int assento[SIZE];
    float valor[SIZE];

    setlocale(LC_ALL,"");
    preencheArray(assento, valor);

    printf("\nInforme a tarifa desejada (1 a 8) ou 0 para sair: ");
    scanf("%i", &tarifa);

    while(tarifa > 0 && tarifa <= SIZE){
        compraBilhete(assento, valor, tarifa);

        printf("\nInforme a tarifa desejada (1 a 8) ou 0 para sair: ");
        scanf("%i", &tarifa);
    }
    return 0;
}

///////////////////////////////////////////////////////////
void preencheArray(int array1[], float array2[]){
    for(int i = 0; i < SIZE; i++){
        printf("Informe o valor da tarifa %i: ", (i+1));
        scanf("%f", &array2[i]);
        printf("Informe a quantidade dispon�vel da tarifa %i: ", (i+1));
        scanf("%i", &array1[i]);
    }
    return;
}

///////////////////////////////////////////////////////////
void compraBilhete(int array1[], float array2[], int ref){
    int qtd;
    int pos;
    float compra;

    pos = ref - 1;
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
