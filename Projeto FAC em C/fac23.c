/* 
 * Atividades disciplina Fundamentos de Algoritmos Computacionais.
 * Autor: Gilmar Ribeiro Santana
 * Data: 08-03-2020
 *
 */
#include <stdio.h>

int main(void){

    #define TAXA 1.20//Define a variável TAXA como constante e com valor de 1.20 (Valor referente à taxa cobraba para parcelamento em mais de 10x)
    #define TXENTRADA 0.30//Define variável TXENTRADA como constante e valor de 0.30 (Valor referente ao percentual mínimo de entrada)
    float compra, qtdParcela, vlrParcela, entrada;

//Cabeçalho. Nome da instituição. 
    printf("\n");
    printf("\n");
    printf("*****   *   ***** ***** ***** *****  ****\n");
    printf("*      * *  *       *   *     *   *    * \n");
    printf("*     *   * *       *   *     *   *    * \n");
    printf("****  ***** ****    *   ****  *****    * \n");
    printf("*     *   * *       *   *     *  *  *  * \n");
    printf("*     *   * *       *   *     *   * * *  \n");
    printf("*     *   * *****   *   ***** *   *  *   \n");

//Cabeçalho da atividade.
    printf("\n\n*****************************************************************************************************************************\n\n");
    printf("Informe o valor da compra e a quantidade de parcelas e entregue o valor da entrada, a qtd de parcelas e valor de cada parcela");
    printf("\n\n*****************************************************************************************************************************\n");

//Início do código.
//Recebe o valor da compra.
    printf("\nSenhor cliente, agradecemos por sua preferência!\nPor favor, informe o valor de sua compra.\nR$ ");
    scanf("%f", &compra);
//Recebe a quantidade de parcelas desejadas. 
    printf("\nEm quantas vezes o senhor deseja parcelar?\n");
    scanf("%f", &qtdParcela);
//Calcula o valor de entrada.
    entrada = compra * TXENTRADA;
    if (qtdParcela > 10){//Condição para parcelamento em mais de 10x acrescenta 20% no parcelamento.
        vlrParcela = ( ( ( compra - entrada ) * TAXA ) / qtdParcela );
        printf("\nSua compra no valor de R$ %.2f terá uma entrada no valor de R$ %.2f e terá %.0f parcelas no valor de R$ %.2f.\n\n", compra, entrada, qtdParcela,  vlrParcela);   

    }else{//Condição para parcelamento em até 10x.
        vlrParcela = ( ( compra - entrada) / qtdParcela );
        printf("\nSua compra no valor de R$ %.2f terá uma entrada no valor de R$ %.2f e terá %.0f parcelas no valor de R$ %.2f.\n\n", compra, entrada, qtdParcela, vlrParcela);

    }

    return 0;
}
