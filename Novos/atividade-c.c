/*
 * Gilmar quer fazer upgrade em seu computador com os seguintes ítens:
 *
 * 1- aumentar a memória de seu computador de 2 para 8GB com 2 pentes de 4GB;
 * 2- Substituir o HD Sata de 500GB por outro HD de 500GB SSD tipo M2;
 * 3- colocar uma placa de vídeo de 2GB
 * 4- substituir o monitor de 17" por outro de 23" 4K
 * 5- instalar um kit de teclado e mouse sem fio Microsoft
 *
 * Há algumas regras que devem ser seguidas nesse upgrade:
 * 1- o orçamento não deve ultrapassar 2000,00
 * Caso os melhores valores sejam conseguidos em uma única loja e se ultrapassar em até 
 * 10% do valor do teto de gasto e a loja aceitar o pagamento das peças parceladas em 10x
 * no cartão de crédito sem juros, ele aceita esse excesso do teto,
 *
 * 2- caso não ache o melhor preço individual das peças em cada produto em uma única loja
 * deverá ser feita uma nova procura perguntando se o lojista consegue bater os preços dos
 * produtos.
 * 
 * 3- caso ultrapasse e não encontre uma única loja com o melhor preço em todos os
 * produtos, devem ser seguidas as seguintes regras até chegar ao teto do orçamento: 
 *
 * a) Instalar um kit de mouse sem fio de outra marca
 * b) Ignorar a aquisição de novo mouse sem fio
 * c) Instalar um monitor de 21"
 * d) Ignorar novo monitor
 *
 * 4- Caso mesmo após essas regras o orçamento não seja atingido ou não encontre todas as
 * peças no mercado não será feito upgrade.
 *
 * O orçamento deve ser feito em três lojas.
 * Ao final deve ser apresentado:
 * 1- o valor total dos produtos
 * 2- o valor médio dos produtos
 * 3- o produto mais caro
 * 4- o produto mais barato
 * 5- se superou o orçamento, em quantos por cento
 * 6- se não ultrapassou o orçamento, em quantos por cento
 */
#include <stdio.h>

#define ORCAMENTO 2000
#define ORCAMENTO_EXTENDIDO 2200

int main(void){
    int loja, cotacao=20201, qtdProduto, produto,maxloja, maxcotacao, minCotacao;
    float precoProduto, valorVenda=0.0, maxVenda=0.0;

    float menorMemoria, menorSSD, menorVideo, menorMonitor, menorTeclado, minVenda, soma;
    int memLoja, ssdLoja, videoLoja, monitorLoja, tecladoLoja, minLoja;
    
    menorMemoria=menorSSD=menorVideo=menorMonitor=menorTeclado=minVenda=9999.99;
    printf("Informe o número da loja ou 0 para sair: ");
    scanf("%i", &loja);
    while(loja > 0){
        printf("Cotação %i\n", cotacao);
        
        printf("                  LISTA DE PRODUTOS\n\n");
        printf("PRODUTO -              DESCRIÇÃO              - VALOR \n");
        printf("  1   -             MEMÓRIA 4GB DDR4        - R$ 00,00\n");
        printf("  2   -               SSD 500GB M2          - R$ 00,00\n");
        printf("  3   -        PLACA DE VÍDEO 2GB DDR4      - R$ 00,00\n");
        printf("  4   -               MONITOR 23""          - R$ 00,00\n");
        printf("  5   -       KIT TECLADO E MOUSE SEM FIO   - R$ 00,00\n");
        
        printf("\n");

        printf("Informe o número produto ou 0 para sair: ");
        scanf("%i", &produto);
        while(produto > 5 || produto < 0){
            printf("CÓDIGO INVÁLIDO. Informe o código do produto ou 0 para sair: ");
            scanf("%i", &produto);
        }
        while(produto > 0){
            printf("Informe a quantidade desejada: ");
            scanf("%i", &qtdProduto);
            printf("Informe o valor unitário: ");
            scanf("%f", &precoProduto);
            if(produto == 1){
                precoProduto = precoProduto * qtdProduto;
                printf("\n*** 1 **** MEMÓRIA 4GB DDR4 *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                if(precoProduto < menorMemoria){
                    menorMemoria = precoProduto;
                    memLoja = loja;
                    minCotacao = cotacao;
                }
            }else if(produto == 2){
                precoProduto = precoProduto * qtdProduto;
                printf("\n*** 2 **** SSD 500GB M2 *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                if(precoProduto < menorSSD){
                    menorSSD = precoProduto;
                    ssdLoja = loja;
                    minCotacao = cotacao;
                }
            }else if(produto == 3){
                precoProduto = precoProduto * qtdProduto;
                printf("\n*** 3 **** PLACA DE VÍDEO 2GB DDR4 *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                if(precoProduto < menorVideo){
                    menorVideo = precoProduto;
                    videoLoja = loja;
                    minCotacao = cotacao;
                }
            }else if(produto == 4){
                precoProduto = precoProduto * qtdProduto;
                printf("\n*** 4 **** MONITOR 23"" *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                if(precoProduto < menorMonitor){
                    menorMonitor = precoProduto;
                    monitorLoja = loja;
                    minCotacao = cotacao;
                }
            }else if(produto == 5){
                precoProduto = precoProduto * qtdProduto;
                printf("\n*** 5 **** KIT TECLADO E MOUSE SEM FIO *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                if(precoProduto < menorTeclado){
                    menorTeclado = precoProduto;
                    tecladoLoja = loja;
                    minCotacao = cotacao;
                }
            }
            valorVenda+=precoProduto;

            printf("Informe o código do produto ou 0 para sair: ");
            scanf("%i", &produto);
            while(produto > 5 || produto < 0){
                printf("CÓDIGO INVÁLIDO. Informe o código do produto ou 0 para sair: ");
                scanf("%i", &produto);
            }
            
        }
        printf("loja %i - Total dos produtos = R$ %.2f\n\n", loja, valorVenda);
        if(valorVenda < minVenda){
            minVenda = valorVenda;
            minLoja = loja;
            minCotacao = cotacao;
        }

        printf("Informe o código do loja ou 0 para sair: ");
        scanf("%i", &loja);
        cotacao++;
        valorVenda=0.0;
    }
    soma = menorMemoria+menorSSD+menorVideo+menorMonitor+menorTeclado;
    printf("\n*****************************************\n");
    printf("RELATÓRIO DE COTAÇÃO\n");
    printf("MENOR COTAÇÃO\n");
    printf("Valor: %.2f\n", minVenda);
    printf("Loja: %i\n", minLoja);
    printf("\nMENORES PRODUTOS\n");
    printf("MEMÓRIA 4GB DDR4             LOJA %i       R$ %.2f\n", memLoja, menorMemoria);
    printf("SSD 500GB M2                 LOJA %i       R$ %.2f\n", ssdLoja, menorSSD);
    printf("PLACA DE VÍDEO 2GB DDR4      LOJA %i       R$ %.2f\n", videoLoja, menorVideo);
    printf("MONITOR 23""                 LOJA %i       R$ %.2f\n", monitorLoja, menorMonitor);
    printf("KIT TECLADO E MOUSE SEM FIO  LOJA %i       R$ %.2f\n", tecladoLoja, menorTeclado);
    printf("VALOR DOS MENORES PRODUTOS                 R$ %.2f\n", soma);
    printf("*****************************************\n\n");

    if(minVenda <= ORCAMENTO){
        printf("A melhor condição é encontrada na loja %i\n", minLoja);
    }else if(soma <= ORCAMENTO){
        printf("Os produtos devem ser adiquiridos em lojas diferentes.\n");
    }
 
    return 0;
}