/* 
 * Uma loja dá desconto aos seus clientes em duas situações:
 * a. 20% sobre o valor total de uma compra, quando esta for superior a 100,00;
 * b. 10% sobre o valor total de uma compra, quando forem compradas mais de 15 unidades
 * Caso o cliente tenha direito aos dois tipos de descontos, deve-se calcular primeiro 
 * o desconto em relação ás unidades e em seguida o desconto em relação ao montante 
 * acima de R$ 100,00.
 */

#include <stdio.h>
#include <locale.h>

#define QUANTIDADE_MINIMA 15
#define VALOR_MINIMO 100.00
#define DESCONTO_ITEM 0.10
#define DESCONTO_VALOR 0.20

float calcularDescontoUnidade(int quantidadeItem, float valorItem);

float calcularDescontoMontante(float valorMontante);

int main (void){

    int itemComprado;
    float valorUnitario, valorProduto, totalPagar;
    float descontoPorItem = 0.0;
    float descontoPorValor = 0.0;
    setlocale(LC_ALL, "Portuguese");

    printf("\n");
    printf("*************************************************************\n");
    printf("* BEM VINDO AO PROGRAMA DE CÁLCULO DE DESCONTOS DE PRODUTOS *\n");
    printf("*************************************************************\n");
    printf("\n");

    printf("Informe a quantidade de itens comprados: ");
    scanf("%i", &itemComprado);

    printf("Informe o valor do item comprado: ");
    scanf("%f", &valorUnitario);

    valorProduto = itemComprado * valorUnitario;

    if(itemComprado > QUANTIDADE_MINIMA){
        descontoPorItem = calcularDescontoUnidade(itemComprado, valorUnitario);
        totalPagar = valorProduto - descontoPorItem;

        if(totalPagar > VALOR_MINIMO){
            descontoPorValor = calcularDescontoMontante(totalPagar);
        }

        totalPagar = valorProduto - descontoPorItem - descontoPorValor;
        printf("Total das compras.........%.2f\n", valorProduto);
        printf("Desconto por item.........%.2f\n", descontoPorItem);
        printf("Desconto por Valor........%.2f\n", descontoPorValor);
        printf("Total a pagar.............%.2f\n\n", totalPagar);

        
    }else if(valorProduto > VALOR_MINIMO){
        descontoPorValor = calcularDescontoMontante(valorProduto);
        totalPagar = valorProduto - descontoPorValor;

        printf("Total das compras.........%.2f\n", valorProduto);
        printf("Desconto por item.........%.2f\n", descontoPorItem);
        printf("Desconto por Valor........%.2f\n", descontoPorValor);
        printf("Total a pagar.............%.2f\n\n", totalPagar);        
    }else{
        printf("Total das compras.........%.2f\n\n", valorProduto);
    }

    return 0;
}

float calcularDescontoUnidade(int quantidadeItem, float valorItem){
    float desconto = ((quantidadeItem * valorItem) * DESCONTO_ITEM);
    return desconto;
}

float calcularDescontoMontante(float valorMontante){
    float desconto = valorMontante * DESCONTO_VALOR;
    return desconto;
}