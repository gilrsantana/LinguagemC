/*
 * Escreva um programa que imprime na tela um menu simulando as seguintes operações em um caixa 
 * eletrônico de um banco: 
 * "Digite a opcao da operacao que deseja fazer:
 * 				1 para ver o saldo atual da conta,
 * 				2 para fazer um deposito;
 * 				3 para fazer um saque.
 * 				4  para finalizar
 * 
 * Inicialmente, seu programa deve solicitar ao usuário como entrada, via teclado, sua conta e 
 * o saldo inicial da conta.
 * 
 * Após o saldo fornecido, o programa deve imprimir o menu acima e executar a opção selecionada 
 * até a opção 4 ser digitada.
 * 
 * Após o término da execução de cada  operação de depósito e saque, o saldo atual deve ser 
 * impresso.
 * 
 * Obrigatoriamente, seu programa deve definir uma função para o menu.
 * 
 * função:
 * 		resp-menu: A função  mostra as opções do menu, captura e valida a opção escolhida, 
 * retornando-a
 * 
 * MODIFIQUE seu programa para processar vários clientes. Término: conta == 0
 */

#include <stdio.h>

#define INICIAL_MINIMO 20.00            // Valor mínimo para abertura de conta
#define TAM 1000

void preencheArray(float v[], float ref); // Preenche o vetor com valor 0.00
int menu();                             // Mostra opções de menu e retorna com uma opção
int validarConta();                     // Valida a conta com o parâmetro de 3 dígitos
float depositoInicial();                // Inicia a conta com um depósito inicial mínimo 
float realizarDeposito(float valor);    // Realiza depósito em uma conta já criada
float realizarSaque(float valor);       // Realiza saque em uma conta já criada

int main(void){
    float vConta[TAM];
    int codigo, operacao, continuar = 1, opcao;
    
    preencheArray(vConta, 0.00);

    printf("*********************************\n");
    printf("* BEM VINDO AO SISTEMA BANCÁRIO *\n");
    printf("*********************************\n\n");
    codigo = validarConta();
    vConta[codigo] = depositoInicial();
    if(vConta[codigo] == 0){
        printf("A conta %i não foi iniciada\n", codigo);
    }else{
        printf("A conta %i foi iniciada com o valor de R$ %.2f.\n\n", codigo, vConta[codigo]);
    }
    
    do{
        printf("\n***********************************\n");
        printf("*          MENU PRINCIPAL         *\n");
        printf("***********************************\n");
        printf("Informe a opcao desejada.\n");
        printf("1 - CRIAR NOVA CONTA\n");
        printf("2 - REALIZAR CONSULTA, DEPOSITO OU SAQUE\n");
        scanf("%i", &opcao);

        if(opcao == 1){
            do{
                printf("\n***********************************\n");
                printf("*   SESSÃO DE CRIAÇÃO DE CONTA    *\n");
                printf("***********************************\n");
                codigo = validarConta();
                if(vConta[codigo] != 0){
                    printf("A conta %i já foi criada. Informe outra\n", codigo);
                }else{
                    vConta[codigo] = depositoInicial();
                    if(vConta[codigo] < INICIAL_MINIMO){
                        printf("A conta não foi iniciada. Faça um depósito mínimo de R$ %.2f\n", INICIAL_MINIMO);
                        vConta[codigo] = 0.0;
                    }else{
                        printf("A conta %i foi iniciada com o valor de R$ %.2f.\n", codigo, vConta[codigo]);
                    }
                }
                
                printf("Deseja criar outra conta? 1 - SIM / 0 - NÃO: ");
                scanf("%i", &continuar);
                printf("\n");
            }while(continuar == 1);

        }else if(opcao == 2){
            printf("\n***********************************\n");
            printf("* SESSÃO DE MOVIMENTAÇÃO DE CONTA *\n");
            printf("***********************************\n");
            codigo = validarConta();
            if(vConta[codigo] == 0){
                printf("A conta %i não foi iniciada\n", codigo);
            }else{
                do{
                    operacao = menu();

                    switch(operacao){
                    case 1:
                        printf("A conta %i tem o saldo de R$ %.2f\n", codigo, vConta[codigo]);
                        break;

                    case 2:
                        vConta[codigo] = realizarDeposito(vConta[codigo]);
                        printf("O novo saldo da conta %i é R$ %.2f\n", codigo, vConta[codigo]);
                        break;
                        
                    case 3:
                        vConta[codigo] = realizarSaque(vConta[codigo]);
                        printf("O saldo da conta %i é R$ %.2f\n", codigo, vConta[codigo]);
                        break;

                    case 0:
                        break;

                    default:
                        break;
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

void preencheArray(float v[], float ref){
	
	for(int i = 0; i < TAM; i++){
		v[i] = ref;
	}
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
