#include <stdio.h>

#define SIZE 8

void preencheArray(int codigo[], int assento[], float valor[]);
void compraBilhete(int array1[], float array2[], int ref, int codigo[]);
int avaliaTarifa(int array[]);
int verificaPosicao(int codigo[], int ref);

int main(void){
    /*
     * CÓDIGO 17 - Posição 0
     * CÓDIGO 48 - Posição 1
     * CÓDIGO 10 - Posição 2
     * CÓDIGO 21 - Posição 3
     * CÓDIGO 96 - Posição 4
     * CÓDIGO 55 - Posição 5
     * CÓDIGO 23 - Posição 6
     * CÓDIGO 16 - Posição 7
     */
    int tarifa;
    int bancoTarifa[SIZE] = {17,48,10,21,96,55,23,16};
    int assento[SIZE];
    float valor[SIZE];

    preencheArray(bancoTarifa, assento, valor);
    tarifa = avaliaTarifa(bancoTarifa);
    
    while(tarifa != 0){
        if(tarifa == -1){
			tarifa = avaliaTarifa(bancoTarifa);
		}else{
			compraBilhete(assento, valor, tarifa, bancoTarifa);
			tarifa = avaliaTarifa(bancoTarifa);
		}
    }

    return 0;
}

///////////////////////////////////////////////////////////
void preencheArray(int codigo[], int assento[], float valor[]){
    for(int i = 0; i < SIZE; i++){
        printf("Informe o valor da tarifa %i: ", codigo[i]);
        scanf("%f", &valor[i]);
        printf("Informe a quantidade disponível da tarifa %i: ", codigo[i]);
        scanf("%i", &assento[i]);
    }
    return;
}

///////////////////////////////////////////////////////////
void compraBilhete(int array1[], float array2[], int ref, int codigo[]){
    int qtd;
    int pos;
    float compra;

    pos = verificaPosicao(codigo, ref);
    if(array1[pos] == 0){
        printf("\nNão há assentos disponíveis\n");
    }else{
        printf("\nInforme a quantidade de bilhetes desejada: ");
        scanf("%i", &qtd);

        if(qtd <= array1[pos]){
            compra = array2[pos] * qtd;
            array1[pos]-=qtd;
            printf("Valor da compra ... R$ %.2f\n\n", compra);
        }else{
            printf("Compra não efetuada.\n");
            printf("Quantidade disponível é de %i assentos.\n", array1[pos]);
        }
    }
    return;
}

///////////////////////////////////////////////////////////
int avaliaTarifa(int array[]){
    int input;
    printf("\nInforme o código da tarifa desejada ou 0 para sair: ");
    scanf("%i", &input);
    if(input == 0){
		return 0;
	}else{
		for(int i = 0; i < SIZE; i++){
			if(input == array[i]){
				return input;
			}
		}
	}
    return -1;
}
///////////////////////////////////////////////////////////
int verificaPosicao(int codigo[], int ref){
    for(int i = 0; i < SIZE; i++){
		if(ref == codigo[i]){
			return i;
		}
	}
    return -1;
}