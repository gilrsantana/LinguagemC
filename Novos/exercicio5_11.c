/*
 * Faça um programa que controle o saldo bancário de um cliente. 
 * O programa lê o valor do saldo anterior e em seguida lê as operações realizadas na conta. 
 * As operações podem ser as seguintes:
 * Saque em dinheiro (código 10);
 * Depósito (código 33);
 * Pagamento de cheque (código 4).
 * O programa lê o código das operações e o valor, realiza as atualizações na conta, 
 * imprimindo uma mensagem ao usuário caso seu saldo se torne negativo.
 * O programa deve continuar a leitura até que o código da operação seja zero. 
 * Códigos diferentes dos definidos devem ser ignorados.
 * Desafio: Ao final do processamento o programa deve imprimir o saldo atual do cliente, 
 * a média de saques e o valor do maior pagamento.
 */

#include <stdio.h>

int menu();

int main(void){
    float saldo, saque, acumulador, qtdSaque, mediaSaque, pagamento, maxPagamento, deposito;
    int codigo;

    saque=acumulador=qtdSaque=mediaSaque=pagamento=maxPagamento=deposito=0.0;
    printf("******************************\n");
    printf("* CONTROLE DE SALDO BANCÁRIO *\n");
    printf("******************************\n");

    printf("\nInforme seu saldo ..... R$ ");
    scanf("%f", &saldo);
    printf("\n");
    
    codigo = menu();
    do{
        switch(codigo){
        case 10:
            printf("Informe o valor do saque .... R$ ");
            scanf("%f", &saque);
            saldo-=saque; 
            acumulador+=saque;
            qtdSaque++;
            if(saldo < 0){
                printf("ATENÇÃO! Seu saldo está negativo\n");
            }
            printf("Seu novo saldo é R$ %.2f\n", saldo);
        break;

        case 33:
            printf("Informe o valor do depósito .... R$ ");
            scanf("%f", &deposito);
            saldo+=deposito; 
            printf("Seu novo saldo é R$ %.2f\n", saldo);
        break;

        case 4:
            printf("Informe o valor do cheque a ser pago .... R$ ");
            scanf("%f", &pagamento);
            saldo-=pagamento; 
            
            if(saldo < 0){
                printf("ATENÇÃO! Seu saldo está negativo\n");
            }
            printf("Seu novo saldo é R$ %.2f\n", saldo);
            maxPagamento = (maxPagamento > pagamento) ? maxPagamento : pagamento; 
        break;

        case 0:
        break;

       // default:
        //break;
        }
        printf("\nInforme o código da operação desejada\n");
        printf("Código 10 - Saque em dinheiro\n");
        printf("Código 33 - Depósito\n");
        printf("Código  4 - Pagamento em cheque\n");
        printf("Código  0 - Sair\n");
        scanf("%i", &codigo);
    }while(codigo!=0);
    
    mediaSaque = acumulador / qtdSaque;
    printf("\nSeu saldo final é R$ %.2f.\n", saldo);
    printf("Seu saque médio é R$ %.2f.\n", mediaSaque);
    printf("Maior cheque pago no valor de R$ %.2f.\n\n", maxPagamento);

    return 0;
}

int menu(){
    int codigo;
    printf("*********************\n");
    printf("* MENU DE OPERAÇÕES *\n");
    printf("*********************\n");

    printf("\nInforme o código da operação desejada\n");
    printf("Código 10 - Saque em dinheiro\n");
    printf("Código 33 - Depósito\n");
    printf("Código  4 - Pagamento em cheque\n");
    printf("Código  0 - Sair\n");
    scanf("%i", &codigo);

    return codigo;
}