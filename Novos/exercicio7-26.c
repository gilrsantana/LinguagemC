
#include <stdio.h>

int le_codigo();
int verifica_tipo(int produto);
int converte_real(int produto, int quantidade);
int verifica_venda(int produto, int qtd);
int descobre_situacao(int referencia1, int referencia2);


int main(void){
    int produto, cod, estoqueAntigo,qtdVenda,tipo, estoqueAtual, estoque, situacao, importado=0, menorCod;
    float vUnitario, vEstoque, vVenda, dolar, menorValor=999999999999;

    printf("Informe a quantidade de produtos: ");
    scanf("%i", &produto);

    while(produto > 0){
        cod = le_codigo();
        printf("Informe a quantidade inicial em estoque do produto %i: ", cod);
        scanf("%i", &estoqueAntigo);
        qtdVenda = verifica_venda(cod, estoqueAntigo);
        estoque = estoqueAntigo - qtdVenda;
        situacao = descobre_situacao(estoque, qtdVenda);
        if(situacao){
            tipo = verifica_tipo(cod);
            if(tipo == 2){
                importado++;
                vEstoque = converte_real(cod, estoque);
            }else{
                printf("Informe o preço unitário do produto %i: ", cod);
                scanf("%f", &vUnitario);
                vEstoque = estoque * vUnitario;
            }
            printf("PRODUTO - TIPO - ESTOQUE - VALOR ESTOQUE\n");
            printf("%6i %6i %8i      R$%8.2f\n", cod, tipo, estoque, vEstoque);
            if(vEstoque < menorValor){
                menorValor = vEstoque;
                menorCod = cod;
            }
        }   
        produto--;
    }

    printf("\nTotal de produtos importados diferentes: %i\n", importado);
    printf("O produto %i tem o menor valor em estoque = R$ %.2f\n\n", menorCod, menorValor);    
    
    return 0;
}

int le_codigo(){
    int codigo;
    printf("Informe o código do produto com 4 dígitos: ");
    scanf("%i", &codigo);
    while(codigo < 1001 || codigo > 2999){
        printf("ERRO! O código deve ser um valor entre 1001 e 2999\n");
        printf("Informe o código do produto com 4 dígitos: ");
        scanf("%i", &codigo);
    }
    return codigo;
}

int verifica_tipo(int produto){
    int tipo;
    tipo = produto / 1000;
    return tipo;
}

int converte_real(int produto, int quantidade){
    float unitario, valor, dolar;
    printf("PRODUTO IMPORTADO\n");
    printf("Informe a cotação do dolar: ");
    scanf("%f", &dolar);
    printf("Informe o preço unitário EM DÓLAR do produto %i: ", produto);
    scanf("%f", &unitario);
    valor = quantidade * unitario * dolar * 1.00;
    return valor;
}

int verifica_venda(int produto, int qtd){
    int venda;
    printf("Informe a quantidade vendida do produto %i: ", produto);
    scanf("%i", &venda);
    
    return venda;
}

int descobre_situacao(int referencia1, int referencia2){
    int situacao;
    int dobroVenda = referencia2 * 2;
    if(referencia1 < 0){
        printf("ESTOQUE INCONSISTENTE\n");
        situacao = 0;
    }else{
        if(dobroVenda > referencia1){
            printf("REPOR ESTOQUE\n");
            situacao = 1;
        }else{
            printf("ESTOQUE OK\n");
            situacao = 1;
        }
    }
    return situacao;
}