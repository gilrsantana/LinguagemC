/*
 * Um vendedor ambulante utiliza concentrado de uva para produzir suco e refresco de uva.
 * Ele utiliza as seguintes proporções para o preparo do suco e do refresco:
 * suco: 1 de concentrado para 2 de água;
 * refresco: 1 de concentrado para 4 de água.
 * O vendedor utiliza copos de 100 ml.
 * Faça um programa que leia a litragem do concentrado que o vendedor irá comprar e o preço pago
 * por este concentrado e informe ao vendedor ambulante:
 *  quantos litros de refresco de uva podem ser produzidos com todo o concentrado;
 *  quantos litros de suco uva podem ser produzidos com todo o concentrado;
 *  quanto ele irá receber transformando o concentrado em suco de uva, considerando R$2,00
 * por copo de suco;
 *  quanto ele irá receber transformando o concentrado em refresco de uva, considerando R$1,00
 * por copo de refresco;
 *  o percentual de lucro do suco; (valor recebido-custo)/valor recebido
 *  o percentual de lucro do refresco (valor recebido-custo)/valor recebido
 * Ex: concentrado:1,5l valor:10,00
 * Com suco: 4,5l  45 copos  90,00  lucro: 88.9%
 * Com refresco: 7,5l  75 copos  75,00 lucro: 86.7%
 */

#include <stdio.h>

/* Constantes padrão de volume e proporção da bebida */
#define VOLUME_PADRAO_DO_CONCENTRADO 1.50
#define VOLUME_COPO 0.10
#define VALOR_COPO_SUCO 2.00
#define VALOR_COPO_REFRESCO 1.00
#define PROPORCAO_SUCO 3
#define PROPORCAO_REFRESCO 5

/* Variáveis globais utilizadas na função main e nas funções auxiliares */
int gMensagemGarrafa = 1;
int gGarrafaDeConcentrado;
float gValorDoConcentrado;
float gValorGasto;

/************************************************************************/
/* Início do método main */
int main(void){

  // Gera as mensagens de iniciais de consulta ao usuário
  void gerarMensagem(int mensagem); 

  // Calcula o gasto total na produção
  float calcularGasto(int produto);

  // Calcula a quantidade de bebida produzida
  float calcularBebida(int proporcao);

  // Calcula a quantidade de copos produzidos
  int calcularCopo(float quantidadeBebida);

  // Calcula o valor final de venda da bebida
  float calcularVendaBebida(int quantidade, float valor);

  // Calcula o lucro final de acordo com a bebida em pcento
  float calcularLucro(float valorTotalBebida);
  

  gerarMensagem(gMensagemGarrafa);
  scanf("%d", &gGarrafaDeConcentrado);

  gerarMensagem(0);
  scanf("%f", &gValorDoConcentrado);

  gValorGasto += calcularGasto(gGarrafaDeConcentrado);
  
  /* Início variáveis do scopo main */
  float quantidade_suco =  calcularBebida(PROPORCAO_SUCO);
  float quantidade_refresco = calcularBebida(PROPORCAO_REFRESCO);

  int quantidade_copo_suco = calcularCopo(quantidade_suco);
  int quantidade_copo_refresco = calcularCopo(quantidade_refresco);

  float valor_total_suco = calcularVendaBebida(quantidade_copo_suco, VALOR_COPO_SUCO);
  float valor_total_refresco = calcularVendaBebida(quantidade_copo_refresco, VALOR_COPO_REFRESCO);

  float lucro_suco = calcularLucro(valor_total_suco);
  float lucro_refresco = calcularLucro(valor_total_refresco);
  /* Fim variáveis do scopo main */
  
  /* Tela de resposta final ao usuário */
  printf("\nCom %d garrafa(s) de concentrado poderá fazer:\n", gGarrafaDeConcentrado);
  printf("Suco: %.2f litros, %d copos, R$ %.2f, %.2f%% de lucro.\n",
         quantidade_suco, quantidade_copo_suco, valor_total_suco, lucro_suco);
  printf("Refresco: %.2f litros, %d copos, R$ %.2f, %.2f%% de lucro.\n",
         quantidade_refresco, quantidade_copo_refresco, valor_total_refresco, lucro_refresco);
  /* Fim tela de resposta final ao usuário */
  return 0;
}
/* Fim do método main */
/*****************************************************************************/

/*****************************************************************************/
/* Início Funções Auxiliares */
void gerarMensagem(int mensagem){

  if(mensagem){
    printf("Informe a quantidade de garrafas de %.2f litros de concentrado deseja comprar: ", VOLUME_PADRAO_DO_CONCENTRADO);
  }else{
    printf("Informe o valor da garrafa de 1,5 litros: ");
  }      
}

float calcularGasto(int produto){

  float valorGasto = produto * gValorDoConcentrado;
  return valorGasto;
}

float calcularBebida(int proporcao){

  float quantidade = (VOLUME_PADRAO_DO_CONCENTRADO * gGarrafaDeConcentrado * proporcao);
  return quantidade;
}

int calcularCopo(float quantidadeBebida){
    
  int copo = quantidadeBebida / VOLUME_COPO;
  return copo;
}

float calcularVendaBebida(int quantidade, float valor){
    
  float valorVenda = quantidade * valor;
  return valorVenda;
}

float calcularLucro(float valorTotalBebida){

  float lucro = (valorTotalBebida - gValorGasto) / (gValorGasto) * 100;
  return lucro;
}
/* Fim Funções Auxiliares */
/**************************************************************************/