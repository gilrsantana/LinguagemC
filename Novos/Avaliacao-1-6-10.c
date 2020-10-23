/*
 * Nome: Gilmar Ribeiro Santana
 * Turma: A
 * Turno: Noite
 * Questão 1
 * 
 * a) Faça uma função para processar os pedidos de reserva de ingressos de uma
 * modalidade esportiva, que deverá receber como parâmetros o código, 
 * a quantidade de ingressos disponíveis e o preço unitário do ingresso de uma modalidade, 
 * retornando a quantidade de ingressos reservados nesta modalidade.
 * Nesta função deverá ser solicitada a digitação dos pedidos de reserva, cada um composto
 * pelo número de identificação do comprador (inteiro) e pela quantidade desejada de
 * ingressos (inteiro). Um pedido de reserva pode ser aceito ou rejeitado. 
 * Término da leitura dos pedidos de reserva de ingressos: número de identificação 
 * do comprador igual a 0(zero).
 * 
 * Um pedido de reserva é aceito se houver ingressos disponíveis e se a quantidade desejada
 * de ingressos for inferior a 6. 
 * Se o pedido for aceito, a função deverá exibir o número de identificação do comprador
 * e o valor do pedido, além de atualizar a quantidade deingressos disponíveis. 
 * Se o pedido for rejeitado, a mensagem “Ingressos esgotados” ou “Acima do máximo permitido”
 * ou “Quantidade desejada acima da disponível” deverá ser exibida, conforme o motivo da 
 * rejeição do pedido.
 * 
 * Após o processamento de todos os pedidos de reserva da modalidade deverá ser exibido o
 * código da modalidade e a quantidade de ingressos ainda disponíveis. 
 * Protótipo da função: int processa_uma_modalidade(int codmod, int qtddisp, float preco);
 * 
 * b) Faça um programa para controlar os pedidos de reservas de ingressos das n(lido)
 * modalidades esportivas da Olimpíada Universitária Brasileira. 
 * O programa deverá ler, para cada modalidade esportiva, o código da modalidade (inteiro), 
 * a quantidade de ingressos disponíveis (inteiro), o preço unitário (real) e, 
 * utilizando a função do item a, processar os pedidos de reserva de ingressos da modalidade. 
 * No final do processamento de todas as modalidades deverá ser exibido o código da modalidade 
 * com maior quantidade de ingressos reservados (considere que não há empate).
*/

#include <stdio.h>

#define PEDIDO_MAXIMO 5

int processa_uma_modalidade(int codmod, int qtddisp, float preco);

int main(){
  int modalidade, ingDisponivel, maiorModalidade, maiorIngresso, totalReservado;
  float valorUnitario;

  maiorModalidade = maiorIngresso = -1;

  printf("Informe o código da modalidade ou 0 para sair:  ");
  scanf("%i", &modalidade);
  while(modalidade){
    printf("Qual a quantidade de ingressos disponíveis? ");
    scanf("%i", &ingDisponivel);
    printf("Qual o valor do ingresso unitário? ");
    scanf("%f", &valorUnitario);
    printf("\n******************************************************************\n");
    printf("Modalidade %i - Ingressos a venda %i - Valor Unitário R$ %.2f\n", modalidade, ingDisponivel, valorUnitario);
    printf("******************************************************************\n\n");
    totalReservado = processa_uma_modalidade(modalidade, ingDisponivel, valorUnitario);
    if(totalReservado > maiorIngresso){
      maiorIngresso = totalReservado;
      maiorModalidade = modalidade;
    } 
    printf("Informe o código da próxima modalidade ou 0 para sair:  ");
    scanf("%i", &modalidade);
  }
  printf("\n******************************************************************\n");
  printf("Modalidade com mais ingressos reservados: %i\n", maiorModalidade);
  printf("Total de ingressos reservados: %i\n", maiorIngresso);
  printf("******************************************************************\n\n");
  
  return 0;
}

int processa_uma_modalidade(int codmod, int qtddisp, float preco){
  int pedido, comprador, acumulador;
  float total;

  acumulador = 0;
  printf("Informe o número do comprador ou 0 para sair: ");
  scanf("%i", &comprador);
  while(comprador){
    printf("Informe a quantidade desejada de ingressos? ");
    scanf("%i", &pedido);
    if((pedido <= qtddisp) && (pedido < 6) && (qtddisp > 0)){
      total = preco * pedido;
      printf("\n******************************************************************\n");
      printf("Número de identificacao do comprador: %i, valor do pedido: %.2f\n", comprador, total);
      printf("******************************************************************\n\n");
    }else{
      printf("\n******************************************************************\n");
      printf("COMPRA NÃO REALIZADA\n");
      if(qtddisp == 0){
        printf("Ingressos esgotados para a modalidade %i.\n", codmod);
      }else{
        if(pedido > PEDIDO_MAXIMO){
          printf("Permitido no máximo %i ingressos por cliente.\n", PEDIDO_MAXIMO);
        }else{
          if(pedido > qtddisp){
            printf("Quantidade desejada supera o número de ingressos disponíveis (%i).\n", qtddisp);
          }
        }
      }
      pedido = 0;
      printf("******************************************************************\n\n");
    }
    acumulador+=pedido;
    qtddisp-=pedido;
    printf("Informe o número do comprador ou 0 para sair: ");
    scanf("%i", &comprador);
  }
  printf("\n******************************************************************\n");
  printf("Modalidade %i, ingressos disponíveis %i\n", codmod, qtddisp);
  printf("******************************************************************\n\n");

  return acumulador;
}
