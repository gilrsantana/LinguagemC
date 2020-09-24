#include <stdio.h>

#define LIMITE1 100.00
#define LIMITE2 300.00
#define DESCONTO_LIMITE2 0.75
#define DESCONTO_LIMITE1 0.85
#define IDADE_REFERENCIA 50

float calcularDesconto (float conta, float desconto);

int main(void){

    float contaAtual, contaComDesconto;
    int idade;

    /* Receber o valor da conta
     * se maior que 300,00 aplicar 25% de desconto
     * se entre 100 e 300 e maior de 50 anos aplicar 15%
     * se menor que 100,00 não aplica desconto
     */

    printf("Informe o valor da conta: ");
    scanf("%f", &contaAtual);

    if(contaAtual > LIMITE2){
        contaComDesconto = calcularDesconto(contaAtual, DESCONTO_LIMITE2);
    }else{
        if(contaAtual >= LIMITE1 && contaAtual < LIMITE2){
            printf("Informe a sua idade: ");
            scanf("%i", &idade);

            if(idade > IDADE_REFERENCIA){
                contaComDesconto = calcularDesconto(contaAtual, DESCONTO_LIMITE1);
            }else{
                contaComDesconto = contaAtual;
            }
        }else{
            contaComDesconto = contaAtual;
        }
    }
    printf("O valor da sua conta é  %.2f\n", contaComDesconto);
    return 0;
}
float calcularDesconto (float conta, float desconto){
    float descontoConcedido = conta * desconto;
    return desconto;
}