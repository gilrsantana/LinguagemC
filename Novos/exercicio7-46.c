
#include <stdio.h>

int main(void){
    int cliente, operacao=20201, qtdProduto, produto,maxCliente, maxOperacao;
    float precoProduto, valorVenda=0.0, maxVenda=0.0;
    
    printf("Informe o código do Cliente ou -1 para sair: ");
    scanf("%i", &cliente);
    while(cliente >= 0){
        printf("Operação %i\n", operacao);
        
        printf("                  LISTA DE PRODUTOS\n\n");
        printf("PRODUTO -              DESCRIÇÃO              - VALOR \n");
        printf("  101   -         XAROPE XPTO 200mL           - R$ 10,00\n");
        printf("  102   -       CARTELA DE ANALGÉSICO         - R$ 11,00\n");
        printf("  103   -               ATADURA               - R$ 12,00\n");
        printf("  104   -               SHAMPOO               - R$ 13,00\n");
        printf("  105   -              BARBEADOR              - R$ 14,00\n");
        
        printf("\n");

        printf("Informe o código do produto ou 0 para sair: ");
        scanf("%i", &produto);
        while(produto > 105 || (produto < 101 && produto >= 1)){
            printf("CÓDIGO INVÁLIDO. Informe o código do produto ou 0 para sair: ");
            scanf("%i", &produto);
        }
        while(produto > 0){
            printf("Informe a quantidade desejada: ");
            scanf("%i", &qtdProduto);
            if(produto == 101){
                precoProduto = 10.00 * qtdProduto;
                printf("*** 101 **** XAROPE XPTO 200mL *** %i UN *** R$ 10,00 ***R$ %.2f\n", qtdProduto, precoProduto);
            }else if(produto == 102){
                precoProduto = 11.00 * qtdProduto;
                printf("*** 102 **** CARTELA DE ANALGÉSICO *** %i UN *** R$ 11,00 ***R$ %.2f\n", qtdProduto, precoProduto);
            }else if(produto == 103){
                precoProduto = 12.00 * qtdProduto;
                printf("*** 103 **** ATADURA *** %i UN *** R$ 12,00 ***R$ %.2f\n", qtdProduto, precoProduto);
            }else if(produto == 104){
                precoProduto = 13.00 * qtdProduto;
                printf("*** 104 **** SHAMPOO *** %i UN *** R$ 13,00 ***R$ %.2f\n", qtdProduto, precoProduto);
            }else if(produto == 105){
                precoProduto = 14.00 * qtdProduto;
                printf("*** 105 **** SHAMPOO *** %i UN *** R$ 14,00 ***R$ %.2f\n", qtdProduto, precoProduto);
            }
            valorVenda+=precoProduto;

            printf("Informe o código do produto ou 0 para sair: ");
            scanf("%i", &produto);
            while(produto > 105 || (produto < 101 && produto >= 1)){
                printf("CÓDIGO INVÁLIDO. Informe o código do produto ou 0 para sair: ");
                scanf("%i", &produto);
            }
        }
        printf("Cliente %i - Total da venda = R$ %.2f\n\n", cliente, valorVenda);
        if(valorVenda > maxVenda){
            maxVenda = valorVenda;
            maxCliente = cliente;
            maxOperacao = operacao;
        }

        printf("Informe o código do Cliente ou -1 para sair: ");
        scanf("%i", &cliente);
        operacao++;
        valorVenda=0.0;
    }
    printf("\n*****************************************\n");
    printf("RELATÓRIO CONTÁBIL FARMÁCIA\n");
    printf("\nMAIOR COMPRA\n");
    printf("\nOperação: %i\n", maxOperacao);
    printf("\nCliente: %i\n", maxCliente);
    printf("\nMaior valor: R$ %.2f\n", maxVenda);
    printf("*****************************************\n\n");
 
    return 0;
}