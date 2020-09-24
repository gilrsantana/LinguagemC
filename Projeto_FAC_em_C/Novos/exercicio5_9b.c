/*
 * Escreva um programa que imprime na tela um menu simulando as seguintes operações em um caixa eletrônico
 * de um banco: "Digite a opcao da operacao que deseja fazer:
 * 1 para ver o saldo atual da conta,
 * 2 para fazer um deposito;
 * 3 para fazer um saque.
 * 4  para finalizar
 * Inicialmente, seu programa deve solicitar ao usuário como entrada, via teclado, sua conta e o saldo
 * inicial da conta.
 * Após o saldo fornecido, o programa deve imprimir o menu acima e executar a opção selecionada até a 
 * opção 4 ser digitada.
 * Após o término da execução de cada  operação de depósito e saque, o saldo atual deve ser impresso.
 * Obrigatoriamente, seu programa deve definir uma função para o menu.
 * resp_menu: A função  mostra as opções do menu, captura e valida a opção escolhida, retornando-a
 * MODIFIQUE seu programa para processar vários clientes. Término: conta == 0
 */

#include <stdio.h>

#define INICIAL_MINIMO 20.00 // Valor mínimo para abertura de conta
int menu();// Mostra opções de menu e retorna com uma opção
int validarConta();// Valida a conta com o parâmetro de 3 dígitos
float depositoInicial();// Inicia a conta com um depósito inicial mínimo 
float realizarDeposito(float valor);// Realiza depósito em uma conta já criada
float realizarSaque(float valor);// Realiza saque em uma conta já criada

int main(void){
    float conta[1000]={0.0};
    float depInicial, saldo, novoSaldo, saque, deposito;
    int codigo, operacao, inicial, continuar = 1, opcao;

    
    codigo = validarConta();
    conta[codigo] = depositoInicial();
    if(conta[codigo] == 0){
        printf("A conta %i não foi iniciada\n", codigo);
    }else{
        printf("A conta %i foi iniciada com o valor de R$ %.2f.\n\n", codigo, conta[codigo]);
    }
    
    do{
        printf("Informe a opcao desejada.\n");
        printf("1 - CRIAR NOVA CONTA\n");
        printf("2 - REALIZAR CONSULTA, DEPOSITO OU SAQUE\n");
        scanf("%i", &opcao);

        if(opcao == 1){
            do{
                printf("******************************\n");
                printf("* SESSÃO DE CRIAÇÃO DE CONTA *\n");
                printf("******************************\n");
                codigo = validarConta();
                if(conta[codigo] != 0){
                    printf("A conta %i já foi criada. Informe outra\n", codigo);
                }else{
                    conta[codigo] = depositoInicial();
                    if(conta[codigo] < INICIAL_MINIMO){
                        printf("A conta não foi iniciada. Faça um depósito mínimo de R$ %.2f\n", INICIAL_MINIMO);
                        conta[codigo] = 0.0;
                    }else{
                        printf("A conta %i foi iniciada com o valor de R$ %.2f.\n", codigo, conta[codigo]);
                    }
                }
                
                printf("Deseja criar outra conta? 1 - SIM / 0 - NÃO: ");
                scanf("%i", &continuar);
                printf("\n");
            }while(continuar == 1);

        }else if(opcao == 2){
            printf("***********************************\n");
            printf("* SESSÃO DE MOVIMENTAÇÃO DE CONTA *\n");
            printf("***********************************\n");
            codigo = validarConta();
            if(conta[codigo] == 0){
                printf("A conta %i não foi iniciada\n", codigo);
            }else{
                do{
                operacao = menu();

                switch(operacao){
                case 1:
                    printf("A conta %i tem o saldo de R$ %.2f\n", codigo, conta[codigo]);
                    break;

                case 2:
                    conta[codigo] = realizarDeposito(conta[codigo]);
                    printf("O novo saldo da conta %i é R$ %.2f\n", codigo, conta[codigo]);
                    break;
                    
                case 3:
                    conta[codigo] = realizarSaque(conta[codigo]);
                    printf("O saldo da conta %i é R$ %.2f\n", codigo, conta[codigo]);
                    break;

                case 0:
                    break;

                default:
                    menu();
                    continue;
                }
                printf("Deseja realizar outra operação na conta %i? 1 - SIM / 0 - NÃO: ", codigo);
                scanf("%i", &continuar);
                printf("\n");
                }while(continuar == 1);
            }       
        }
                    
        printf("Deseja continuar no programa? 1 - SIM / 0 - NÃO: ");
        scanf("%i", &continuar);
        printf("\n");
    }while(continuar == 1);

    return 0;
}
// Mostra opções de menu e retorna com uma opção
int menu(){
    int item;

    printf("Informe a operação desejada.\n");
    printf("1 - CONSULTAR SALDO\n");
    printf("2 - REALIZAR DEPÓSITO\n");
    printf("3 - REALIZAR SAQUE\n");
    printf("0 - FINALIZAR\n");
    scanf("%i", &item);
    return item;
}
// Valida a conta com o parâmetro de 3 dígitos
int validarConta(){
    int codigo;
    printf("Informe o número da conta com três dígitos: ");
    scanf("%i", &codigo);
    while(codigo < 100 || codigo > 999){
        printf("ERRO! Digite um número entre 100 e 999\n");
        printf("Informe o número da conta com três dígitos: ");
        scanf("%i", &codigo);
    }
    return codigo;
}
// Inicia a conta com um depósito inicial
float depositoInicial(){
    float valor = 0.0;
    printf("Informe o valor do depósito inicial da conta: ");
    scanf("%f", &valor);
    if(valor < INICIAL_MINIMO){
        printf("SUA CONTA PRECISA SER INICIADA COM UM VALOR MÍNIMO DE R$ %.2f\n", INICIAL_MINIMO);
        valor = 0.0;
    }
    return valor;
}
// Realiza depósito em uma conta
float realizarDeposito(float valor){
    float deposito;
    if(valor == 0){
        printf("CONTA NÃO INICIADA. REALIZE UM DEPÓSITO INICIAL MÍNIMO DE R$ %.2f\n", INICIAL_MINIMO);
    }else{
        printf("Informe o valor do depósito: ");
        scanf("%f", &deposito);
        valor+=deposito;
    }
    
    return valor;
}
// Realiza saque em uma conta
float realizarSaque(float valor){
    float saque;
    printf("Informe o valor do saque: ");
    scanf("%f", &saque);
    if(saque > valor){
        printf("SAQUE NÃO AUTORIZADO.\n");
    }else{
        if((valor - saque) <= 0.000000000000){
        printf("SUA CONTA NÃO PODE TER SALDO ZERADO.\n");
        }else{
            valor-=saque;
        }
    } 
    return valor;
}
