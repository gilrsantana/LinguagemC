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
 * 1- o orçamento não deve ultrapassar 1500,00
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

#define MAX_ORCAMENTO 1500.00
#define LIMITE_ORCAMENTO 1650.00
#define VERIFICADOR1 900000000.00
#define VERIFICADOR2 1000000.00

float calculaProduto();
int retornaQuantidade(float valor);
float retornaUnitario(float valor, int quantidade);

int main(void){
  int loja, cont, desconto, qtd;
  int memoria, ssd, video, monitor23, monitor21, teclado;
  float menorMemoria, menorSsd, menorVideo, menorMonitor23, menorMonitor21, menorTeclado;
  float vMemoria,totalMemoria, vSsd, vVideo, vMonitor23, vMonitor21, vTeclado, acumulador=0;
  menorMemoria=menorSsd=menorVideo=menorMonitor23=menorMonitor21=menorTeclado=9999.99;
  vMemoria=totalMemoria=vSsd=vVideo=vMonitor23=vMonitor21=vTeclado=0.00;

  printf("Possui memória DDR4 4GB? 1-SIM / 0-NÃO");
  scanf("%i", &memoria);
  if(memoria){
    totalMemoria = calculaProduto();
    qtd = retornaQuantidade(totalMemoria);
    vMemoria = retornaUnitario(totalMemoria, qtd);
    printf("total = %f\n", totalMemoria);
    printf("unitario = %f\n", vMemoria);
    printf("qtd = %i\n", qtd);
    
    printf("\n\n-------------------------------------------------------------------------\n\n");
    printf("------ PRODUTO ----- UNITÁRIO ----- QTD --- TOTAL ----\n");
    printf("MEMÓRIA 4GB DDR4 --- R$ %4.2f  ---  %i  --- R$ %4.2f\n", vMemoria, qtd, vMemoria*qtd);
    acumulador+=totalMemoria;
    printf("\n\n-------------------------------------------------------------------------\n\n");
  }
  printf("Possui SSD 500GB tipo M2? 1-SIM / 0-NÃO");
  scanf("%i", &ssd);
  if(ssd){
    printf("Informe valor individual do produto: ");
    scanf("%f", &vMemoria);
    printf("Informe a quantidade do produto: ");
    scanf("%i", &qtd);
    vSsd*=qtd;
    printf("\n\n-------------------------------------------------------------------------\n\n");
    printf("------ PRODUTO ----- UNITÁRIO ----- QTD --- TOTAL ----\n");
    printf("SSD 500GB TP  M2 --- R$ %4.2f  ---  %i  --- R$ %4.2f\n", vMemoria, qtd, vSsd);
    acumulador+=vSsd;
    printf("\n\n-------------------------------------------------------------------------\n\n");
  }


   

  return 0;
}


float calculaProduto(){
  float produto, totalProduto;
  float qtd;
  printf("Informe valor individual do produto: ");
  scanf("%f", &produto);
  printf("Informe a quantidade do produto: ");
  scanf("%f", &qtd);
  totalProduto = ((produto * qtd) + VERIFICADOR1 + (qtd * VERIFICADOR2));
  printf("%f\n", produto);
  printf("%f\n", qtd);
  printf("%f\n", totalProduto);
  return totalProduto;
}

int retornaQuantidade(float valor){
  int qtd = (valor - VERIFICADOR1) / VERIFICADOR2;
  return qtd;
}

float retornaUnitario(float valor, int quantidade){
  float unitario = (valor - VERIFICADOR1 - (quantidade * VERIFICADOR2)) / quantidade;
  return unitario;
}