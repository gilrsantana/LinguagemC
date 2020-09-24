/*
 * Faça um programa para mostrar o valor total a pagar por um produto em promoção. 
 * O valor básico do produto e percentual de desconto são obtidos do código do produto
 * que possui 4 algarismos de acordo com a seguinte regra: 
 * Código do produto: xxyy
 * Preço básico: XX*15,00 + YY
 * Percentual de desconto: YY 
 * Por exemplo: código do produto: 2314
 * Preço : 23*15,00 + 14,00 = 359,00 
 * Desconto: 14% 
 * Total a pagar: 308,74 
 * Lembre-se que: 32/10 = 3  (quociente da divisão inteira) e  
 * 32%10 = 2( resto da divisão inteira)
 */

#include <stdio.h>

#define FATOR_PRECO 15 //Definido na regra de negócio
#define ITENS_CADASTRADOS 10 //Itens que o sistema pode suportar
#define REFERENCIA_DOS_PRODUTOS 5 //Atributos por produto

//Matriz referência para armazenamento dos itens
float matriz[ITENS_CADASTRADOS][REFERENCIA_DOS_PRODUTOS]={0};

//Variáveis globais utilizadas nas funções auxiliares e na main
int gCodigo = 0; 
int gPosicaoItem = 0;
int gIdProduto = 1;
int gColunaItem = 0;
int gColunaCodigo = 1;
int gColunaPreco = 2;
int gColunaDesconto = 3;
int gColunaTotal = 4;
float gPrecoDoProduto;
float gDescontoDoProduto;
float gTotalDoProduto;

//Cadastrar produtos
void sessaoCadastrarProduto();
//Calcular preço bruto do produto
float calcularPrecoBruto(int codigoDoProduto);
//Calcular o desconto do produto
float calcularDesconto(int codigoDoProduto);
//Calcular o valor total do produto
float calcularTotal(int codigoDoProduto);
//Apagar um produto já listado
void apagarProduto(int identificacaoDoProduto);
//Listar a matriz com todas as posições
void listarItensCadastrados(void);

int main(void){
    
    int menu;

    printf("\n\nPROGRAMA DE CADASTRO DE PRODUTOS\n\n");

    printf("Informe a opção desejada\n");
    printf("1 - CADASTRAR ITEM\n2 - COLSULTAR ITENS CADASTRADOS\n3 - APAGAR ITEM\n4 - SAIR DO PROGRAMA\n");
    printf("Sua opção: ");
    scanf("%i", &menu);

    while(menu < 1 || menu > 4){
        printf("ERRO!\n");
        printf("Informe a opção desejada\n");
        printf("1 - CADASTRAR ITEM\n2 - LISTAR ITENS CADASTRADOS\n3 - APAGAR ITEM\n4 - SAIR DO PROGRAMA\n");
        printf("Sua opção: ");
        scanf("%i", &menu);
    }

    switch (menu)
    {
    case 1:
        sessaoCadastrarProduto();
        break;
    case 2:
        listarItensCadastrados();
        break;
    
    case 3:
        printf("\n\n******ATENÇÃO******\n");
        printf("TEM CERTEZA QUE DESEJA APAGAR UM PRODUTO?");
        printf("0 = NÃO / 1 = SIM: ");
        int apagar;
        scanf("%i", &apagar);

        int itemParaApagar;
        if(apagar){
            printf("Informe o ID do Produto: ");
            scanf("%i", &itemParaApagar);
            apagarProduto(itemParaApagar-1);
        }else{
            listarItensCadastrados();
        }
        
    break;

    case 4:
        break;
    
    default:
        break;
    }
    
    return 0;
}

/****Início da função de Cadastro de Produtos****/
void sessaoCadastrarProduto(void){

    float precoBruto;
    float desconto;
    float total;

    printf("\n\n******SESSÃO DE CADASTRO DE PRODUTOS******\n");
    printf("Informe o código de 4 dígitos: ");
    scanf("%i", &gCodigo);
    
    while(gCodigo < 1000 || gCodigo > 9999){
        printf("\nERRO! Digite um código de 4 dígitos\n");
        printf("SEÇÃO DE CADASTRO DE PRODUTO\n");
        printf("Informe o código de 4 dígitos: ");
        scanf("%i", &gCodigo);
    }

    matriz[gPosicaoItem][gColunaItem] = gIdProduto;
    matriz[gPosicaoItem][gColunaCodigo] = gCodigo;
    matriz[gPosicaoItem][gColunaPreco] = calcularPrecoBruto(gCodigo);
    matriz[gPosicaoItem][gColunaDesconto] = calcularDesconto(gCodigo);
    matriz[gPosicaoItem][gColunaTotal] = calcularTotal(gCodigo);
    
    printf("ID  \t CODIGO\t PREÇO BRUTO\t DESCONTO%%\t    TOTAL\n");
        
    printf("%2.0f\t", matriz[gPosicaoItem][gColunaItem]);
    printf("   %.0f\t", matriz[gPosicaoItem][gColunaCodigo]);
    printf("   R$ %.2f\t", matriz[gPosicaoItem][gColunaPreco]);
    printf("       %2.0f%%\t", matriz[gPosicaoItem][gColunaDesconto]);
    printf("R$ %.2f\t", matriz[gPosicaoItem][gColunaTotal]);
    printf("\n");
    
    gPosicaoItem++;  
    gIdProduto++;

    if(gPosicaoItem == ITENS_CADASTRADOS - 1){
        printf("ATENÇÃO! VOCÊ SÓ PODE CADASTRAR MAIS UM PRODUTO\n");
    }          
    if(gPosicaoItem == ITENS_CADASTRADOS){
        printf("ATENÇÃO! SISTEMA NÃO SUPORTA MAIS ITENS CADASTRADOS\n");
    }

    printf("******FIM DA SESSÃO DE CADASTRO DE PRODUTOS******\n");

    main();
}
/****Fim da função de Cadastro de Produtos****/

/****Início da função de Calculo de preço bruto de Produtos****/
float calcularPrecoBruto(int codigoDoProduto){

    gPrecoDoProduto = ( (codigoDoProduto / 100) * FATOR_PRECO) + codigoDoProduto % 100;

    return gPrecoDoProduto;
}
/****Fim da função de Calculo de preço bruto de Produtos****/

/****Início da função de Calculo de desconto de Produtos****/
float calcularDesconto(int codigoDoProduto){

    gDescontoDoProduto = codigoDoProduto % 100;

    return gDescontoDoProduto;
}
/****Fim da função de Calculo de desconto de Produtos****/

/****Início da função de Calculo de valor total do Produto****/
float calcularTotal(int codigoDoProduto){
    
    
    gTotalDoProduto = gPrecoDoProduto - (gPrecoDoProduto * (gDescontoDoProduto / 100) );

    return gTotalDoProduto;
}
/****Fim da função de Calculo de valor total do Produto****/

/****Início da função de listar todos os produtos****/
void listarItensCadastrados(void){

    printf("\n\n******SESSÃO DE LISTAGEM DE PRODUTOS******\n");
    printf("ID  \t CODIGO\t PREÇO BRUTO\t DESCONTO%%\t    TOTAL\n");
    for(int i = 0; i < ITENS_CADASTRADOS; i++){
        printf("%2.0f\t", matriz[i][gColunaItem]);
        printf("   %.0f\t", matriz[i][gColunaCodigo]);
        printf("   R$ %.2f\t", matriz[i][gColunaPreco]);
        printf("       %2.0f%%\t", matriz[i][gColunaDesconto]);
        printf("R$ %.2f\t", matriz[i][gColunaTotal]);
        printf("\n");
    }

    printf("******FIM DA SESSÃO DE LISTAGEM DE PRODUTOS******\n");

    main();
}
/****Fim da função de listar todos os produtos****/

/****Início da função de apagar um produto determinado****/
void apagarProduto(int identificacaoDoProduto){

    matriz[identificacaoDoProduto][gColunaItem] = 0;
    matriz[identificacaoDoProduto][gColunaCodigo] = 0;
    matriz[identificacaoDoProduto][gColunaPreco] = 0;
    matriz[identificacaoDoProduto][gColunaDesconto] = 0;
    matriz[identificacaoDoProduto][gColunaTotal] = 0;

    main();
}
/****Fim da função de apagar um produto determinado****/