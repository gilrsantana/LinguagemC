/*
 * Nome: Gilmar Ribeiro Santana
 * Turma: A
 * 
 * Marcos quer fazer upgrade em seu computador com os seguintes ítens:
 *
 * 1- aumentar a memória de seu computador de 2 para 8GB com 2 pentes de 4GB;
 * 2- Substituir o HD Sata de 500GB por outro HD de 500GB SSD tipo M2;
 * 3- colocar uma placa de vídeo de 2GB
 * 4- substituir o monitor de 17" por outro de 23" 4K
 * 5- instalar um kit de teclado e mouse sem fio Microsoft
 *
 * Há algumas regras que devem ser seguidas nesse upgrade:
 * 1- o orçamento não deve ultrapassar 2000,00
 * 
 * 2- caso não ache o melhor preço individual das peças em em uma única loja
 * os produtos poderão ser comprados em lojas diferentes.
 * 
 * 3- caso ultrapasse o orçamento da loja e dos produtos listados individualmente 
 * será feita uma nova rodada de cotação podendo escolher os produtos que não vão ser 
 * comprados.
 *
 * O orçamento deve ser feito em pelo menos três lojas.
 * Ao final deve ser apresentado:
 * 1- o valor total dos produtos
 * 2- o valor médio dos produtos
 * 3- o produto mais caro
 * 4- o produto mais barato
 * 5- percentual do orçamento gasto
 */
#include <stdio.h>

#define ORCAMENTO 2000               // VALOR LIMITE DO ORÇAMENTO
#define MAIOR_VALOR 9999.99          // VALOR MÁXIMO DE REFERÊNCIA PARA COMPARAÇÕES
#define MENOR_VALOR 0.00             // VALOR MÍNIMO DE REFERÊNCIA PARA COMPARAÇÕES

// VERIFICA O ÍTEM MAIS CARO DA LISTA
float calculaCaro(float vlr1, float vlr2, float vlr3, float vlr4, float vlr5);

// VERIFICA O ÍTEM MAIS BARATO DA LISTA
float calculaBarato(float vlr1, float vlr2, float vlr3, float vlr4, float vlr5);

// QUANTIFICA OS ITENS COTADOS
int quantificaProduto(float vlr1, float vlr2, float vlr3, float vlr4, float vlr5);

// LISTA A RELAÇÃO DE PRODUTOS
void listaProdutos();

// VERIFICA O CÓDIGO DO ÍTEM DIGITADO SE É VÁLIDO
int verificaProduto();

int main(void){
// DECLARAÇÃO DE VARIÁVEIS
    int loja=1;                  // ARMAZENA O NÚMERO DA LOJA
    int cotacao=20201;           // ARAMAZENA O NÚMERO DA COTAÇÃO
    int qtdProduto;              // ARMAZENA A QUANTIDADE DO PRODUTO COTADO
    int produto;                 // ARMAZENA O TIPO DO PRODUTO OU 0 PARA SAIR DO LAÇO
    int quantidade;              // ARMAZENA A QUANTIDADE DE PRODUTOS COMPRADOS
    int memLoja;                 // ARMAZENA A LOJA COM O MENOR VALOR DE MEMÓRIA
    int ssdLoja;                 // ARMAZENA A LOJA COM O MENOR VALOR DE SSD
    int videoLoja;               // ARMAZENA A LOJA COM O MENOR VALOR DE PLACA DE VÍDEO
    int monitorLoja;             // ARMAZENA A LOJA COM O MENOR VALOR DE MONITOR
    int tecladoLoja;             // ARMAZENA A LOJA COM O MENOR VALOR DE KIT TECLADO SEM FIO
    int minLoja;                 // ARMAZENA A LOJA COM A MENOR COTAÇÃO DE PRODUTOS
    int cotacaoMinima=0;         // REGISTRA COTAÇÕES FEITAS (MÍNIMO 3 PARA EXECUÇÃO DO PROGRAMA)

    float precoProduto;          // REGISTRA O PREÇO INDIVIDUAL E TOTAL DO PRODUTO
    float soma;                  // ARMAZENA A SOMA DOS PRODUTOS DE MENOR PREÇO
    float barato;                // ARAMAZENA O VALOR DO PRODUTO MAIS BARATO
    float caro;                  // ARAMAZENA O VALOR DO PRODUTO MAIS CARO
    float valorVenda=0.0;        // ARMAZENA O VALOR DOS PRODUTOS DA LOJA
    float menorMemoria;          // ARMAZENA O MENOR VALOR DA MEMÓRIA
    float menorSSD;              // ARMAZENA O MENOR VALOR DO SSD
    float menorVideo;            // ARMAZENA O MENOR VALOR DA PLACA DE VÍDEO
    float menorMonitor;          // ARMAZENA O MENOR VALOR DO MONITOR
    float menorTeclado;          // ARMAZENA O MENOR VALOR DO KIT DE TECLADO
    float minVenda;              // ARMAZENA O VALOR DA MENOR COTAÇÃO

    // INICIALIZAÇÃO DAS VARIÁVEIS    
    menorMemoria=menorSSD=menorVideo=menorMonitor=menorTeclado=minVenda=soma=MAIOR_VALOR;


    // DESENVOLVIMENTO DO PROGRAMA
    while(minVenda > ORCAMENTO && soma > ORCAMENTO){ //While de comparação de valores
            
        while(loja > 0){ // Cotação dos preços da loja
            printf("Cotação %i\n", cotacao);
            printf("********************** LOJA %i **********************\n", loja);
            listaProdutos();
            produto = verificaProduto();
            while(produto > 0){
                precoProduto = 0;
                printf("Informe a quantidade desejada: ");
                scanf("%i", &qtdProduto);
                printf("Informe o valor unitário: ");
                scanf("%f", &precoProduto);
                precoProduto = precoProduto * qtdProduto;
                if(produto == 1){   
                    printf("\n*** 1 **** MEMÓRIA 4GB DDR4 *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                    if(precoProduto < menorMemoria){
                        menorMemoria = precoProduto;
                        memLoja = loja;
                    }
                }else if(produto == 2){
                    printf("\n*** 2 **** SSD 500GB M2 *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                    if(precoProduto < menorSSD){
                        menorSSD = precoProduto;
                        ssdLoja = loja;
                    }                   
                }else if(produto == 3){
                    printf("\n*** 3 **** PLACA DE VÍDEO 2GB DDR4 *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                    if(precoProduto < menorVideo){
                        menorVideo = precoProduto;
                        videoLoja = loja;
                    }
                }else if(produto == 4){
                    printf("\n*** 4 **** MONITOR 23"" *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                    if(precoProduto < menorMonitor){
                        menorMonitor = precoProduto;
                        monitorLoja = loja;
                    }                    
                }else if(produto == 5){
                    printf("\n*** 5 **** KIT TECLADO E MOUSE SEM FIO *** %i UN *** R$ %.2f ***R$ %.2f\n\n", qtdProduto, precoProduto/qtdProduto, precoProduto);
                    if(precoProduto < menorTeclado){
                        menorTeclado = precoProduto;
                        tecladoLoja = loja;
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
            printf("\n*****************************************\n");
            printf("loja %i - Total dos produtos = R$ %.2f\n", loja, valorVenda);
            printf("*****************************************\n\n");
            if(valorVenda < minVenda){
                minVenda = valorVenda;
                minLoja = loja;
            }
            cotacaoMinima++;
            cotacao++;
            printf("Informe o código do loja ou 0 para sair: ");
            scanf("%i", &loja);
            if(loja == 0 && cotacaoMinima < 3){
                printf("É preciso no mínimo três cotações\n");
                loja = cotacao;
            }
            valorVenda=0.0;

        } // Fim cotação dos preços da loja
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
        printf("MONITOR 23                   LOJA %i       R$ %.2f\n", monitorLoja, menorMonitor);
        printf("KIT TECLADO E MOUSE SEM FIO  LOJA %i       R$ %.2f\n", tecladoLoja, menorTeclado);
        printf("VALOR DOS MENORES PRODUTOS                R$ %.2f\n", soma);
        printf("*****************************************\n\n");

        if(minVenda > ORCAMENTO && soma > ORCAMENTO){
            printf("A cotação e/ou a soma dos produtos supera seu orçamento.\n");
            printf("Faça uma nova rodada de cotações, excluindo produtos se necessário.\n\n");
            loja = cotacao;
            
        }else if(soma <= ORCAMENTO && minVenda > ORCAMENTO){
            printf("Os produtos devem ser adiquiridos em lojas diferentes.\n");
        }else if(minVenda <= ORCAMENTO){
            printf("Melhor cotação: LOJA %i - VALOR R$ %.2f", minLoja, minVenda);
        }

    }// Fim while de comparação de valores
    

    printf("\n*****************************************\n");
    printf("RELATÓRIO FINAL DA COTAÇÃO\n");
    printf("MENOR COTAÇÃO\n");
    printf("Valor: %.2f\n", minVenda);
    printf("Loja: %i\n", minLoja);
    printf("\nMENORES PRODUTOS\n");
    printf("MEMÓRIA 4GB DDR4             LOJA %i       R$ %.2f\n", memLoja, menorMemoria);
    printf("SSD 500GB M2                 LOJA %i       R$ %.2f\n", ssdLoja, menorSSD);
    printf("PLACA DE VÍDEO 2GB DDR4      LOJA %i       R$ %.2f\n", videoLoja, menorVideo);
    printf("MONITOR 23                   LOJA %i       R$ %.2f\n", monitorLoja, menorMonitor);
    printf("KIT TECLADO E MOUSE SEM FIO  LOJA %i       R$ %.2f\n", tecladoLoja, menorTeclado);
    printf("VALOR DOS MENORES PRODUTOS                R$ %.2f\n", soma);
    printf("*****************************************\n\n");

    caro = calculaCaro(menorMemoria, menorSSD, menorVideo, menorMonitor, menorTeclado);
    barato = calculaBarato(menorMemoria, menorSSD, menorVideo, menorMonitor, menorTeclado);
    quantidade = quantificaProduto(menorMemoria, menorSSD, menorVideo, menorMonitor, menorTeclado);
    
    printf("DADOS ESTATÍSTICOS\n");
    printf("Valor total dos produtos      R$ %.2f\n", soma);
    printf("Valor médio dos produtos      R$ %.2f\n", soma/quantidade);
    printf("Produto mais caro             R$ %.2f\n", caro);
    printf("Produto mais barato           R$ %.2f\n", barato);
    printf("Percentual do orçamento gasto %.2f%%\n\n", soma/ORCAMENTO*100);

    return 0;
}

//////////////////////////////////////////////////
//////////////  FUNÇÕES AUXILIARES ///////////////
//////////////////////////////////////////////////

float calculaCaro(float vlr1, float vlr2, float vlr3, float vlr4, float vlr5){
    float valor = MENOR_VALOR;
    if(vlr1 > valor){
        valor = vlr1;
    }
    if(vlr2 > valor){
        valor = vlr2;
    }
    if(vlr3 > valor){
        valor = vlr3;
    }
    if(vlr4 > valor){
        valor = vlr4;
    }
    if(vlr5 > valor){
        valor = vlr5;
    }
      
    return valor;
}

float calculaBarato(float vlr1, float vlr2, float vlr3, float vlr4, float vlr5){
    float valor = MAIOR_VALOR;
    if(vlr1 < valor && vlr1 != 0){
        valor = vlr1;
    }
    if(vlr2 < valor && vlr2 != 0){
        valor = vlr2;
    }
    if(vlr3 < valor && vlr3 != 0){
        valor = vlr3;
    }
    if(vlr4 < valor && vlr4 != 0){
        valor = vlr4;
    }
    if(vlr5 < valor && vlr5 != 0){
        valor = vlr5;
    }
    return valor;
}

int quantificaProduto(float vlr1, float vlr2, float vlr3, float vlr4, float vlr5){
    int quantidade = 5;
    if(vlr1 == MENOR_VALOR){
        quantidade--;
    }else if(vlr2 == MENOR_VALOR){
        quantidade--;
    }else if(vlr3 == MENOR_VALOR){
        quantidade--;
    }else if(vlr4 == MENOR_VALOR){
        quantidade--;
    }else if(vlr5 == MENOR_VALOR){
        quantidade--;
    }
    return quantidade;
}

void listaProdutos(){
    printf("                  LISTA DE PRODUTOS\n\n");
    printf("PRODUTO -              DESCRIÇÃO              - VALOR \n");
    printf("  1   -             MEMÓRIA 4GB DDR4        - R$ 00,00\n");
    printf("  2   -               SSD 500GB M2          - R$ 00,00\n");
    printf("  3   -        PLACA DE VÍDEO 2GB DDR4      - R$ 00,00\n");
    printf("  4   -         MONITOR 23 POLEGADAS        - R$ 00,00\n");
    printf("  5   -       KIT TECLADO E MOUSE SEM FIO   - R$ 00,00\n\n"); 
}

/* 
 * Esta função deve trabalhar em conjunto com a função void listaProdutos(), 
 * pois o valor da variável código não pode ser maior que a quantidade de 
 * produtos listados na tabela da função listaProdutos()
 */

int verificaProduto(){
    int codigo;
    printf("Informe o número produto ou 0 para sair: ");
    scanf("%i", &codigo);
    while(codigo > 5 || codigo < 0){
        printf("CÓDIGO INVÁLIDO. Informe o código do produto ou 0 para sair: ");
        scanf("%i", &codigo);
    }
    return codigo;
}