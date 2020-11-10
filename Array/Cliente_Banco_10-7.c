#include <stdio.h>

#define SIZE 10573

int validaConta(int array[], int ref);
void criarConta(int array[], int ref, int controle);
void operaConta(int nome[], int ref, float valor[]);
int encontraIndice(int array[], int ref);

int main(void){
    int opcao, num, aceito;
    int i = 0;
    int conta[SIZE] = {0};
    float saldo[SIZE] = {0.0};

    printf("Informe a op��o desejada\n");
    printf("0 - Sair do programa.\n");
    printf("1 - Criar conta.\n");
    printf("2 - Realizar opera��o.\n");
    printf("OP��O: ");
    scanf("%i", &opcao);

    while(opcao == 1 || opcao == 2){
        switch(opcao){
        case 1:
            printf("\nInforme o n�mero da conta1: ");
            scanf("%i", &num);
            aceito = validaConta(conta, num);
            if(aceito != 0){
                criarConta(conta, aceito, i);
                printf("PARAB�NS\n");
                printf("Conta %i criada com sucesso\n\n", conta[i]);
                i++;
            }else{
                printf("\nERRO!!!\n");
                printf("Conta j� existe.\n\n");
            }
            break;
        case 2:
            printf("\nInforme o n�mero da conta: ");
            scanf("%i", &num);
            aceito = validaConta(conta, num);
            if(aceito == 0){
                operaConta(conta, num, saldo);
            }else{
                printf("\nERRO!!!\n");
                printf("Conta n�o encontrada.\n\n");
            }
            break;
        }
        printf("Informe a op��o desejada:\n");
        printf("0 - Sair do programa.\n");
        printf("1 - Criar conta.\n");
        printf("2 - Realizar opera��o.\n");
        printf("OP��O: ");
        scanf("%i", &opcao);
    }

    return 0;
}

//////////////////////////////////////////////////////////
int validaConta(int array[], int ref){
    for(int i = 0; i < SIZE; i++){
        if(ref == array[i]){
            return 0;
        }
    }
    return ref;
}

//////////////////////////////////////////////////////////
void criarConta(int array[], int ref, int controle){
    array[controle] = ref;
    return;
}

//////////////////////////////////////////////////////////
void operaConta(int nome[], int ref, float valor[]){
    int indice, op;
    float quantia;
    indice = encontraIndice(nome, ref);

    printf("Selecione a opera��o desejada\n");
    printf("1 - Sacar ou Depositar valor.\n");
    printf("2 - Verificar Saldo.\n");
    scanf("%i", &op);
    while(op == 1 || op == 2){
        if(op == 1){
            printf("Informe um valor + para dep�sito ou - para saque: ");
            scanf("%f", &quantia);
            if( (quantia + valor[indice]) >= 0 ){
                valor[indice]+=quantia;
            }else{
                printf("Saldo insuficiente\n\n");
            }
        }else{
            printf("O saldo da conta %i � = R$ %.2f\n\n", ref, valor[indice]);
        }
        printf("Selecione a opera��o desejada\n");
        printf("0 - Sair da se��o.\n");
        printf("1 - Sacar ou Depositar valor.\n");
        printf("2 - Verificar Saldo.\n");
        scanf("%i", &op);
    }

}

//////////////////////////////////////////////////////////
int encontraIndice(int array[], int ref){
    for(int i = 0; i < SIZE; i++){
        if(ref == array[i]){
            return i;
        }
    }
}
//////////////////////////////////////////////////////////
