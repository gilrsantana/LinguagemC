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

#define MAX_ORCAMENTO 2000.00
#define LIMITE_ORCAMENTO 2200.00

int main(void){
  int loja, cont=1, desconto, qtd, memLoja, ssdLoja, videoLoja, mon23Loja, mon21Loja, tecLoja, acLoja;
  int memoria, ssd, video, monitor23, monitor21, teclado;
  float menorMemoria, menorSsd, menorVideo, menorMonitor23, menorMonitor21, menorTeclado, menorLoja;
  float vMemoria,vSsd, vVideo, vMonitor23, vMonitor21, vTeclado, acumulaLoja, acumulador=0;
  float total;

  menorMemoria=menorSsd=menorVideo=menorMonitor23=menorMonitor21=menorTeclado=menorLoja=9999.99;
  printf("Deseja fazer a consulta em quantas lojas? ");
  scanf("%i", &loja);
  while(cont <= loja){
    printf("\n\n-------------------------------------------------------------------------\n\n");
    printf("-------------------------------- LOJA %i ---------------------------------", cont);
    printf("\n\n-------------------------------------------------------------------------\n\n");
    printf("Possui memória DDR4 4GB? 1-SIM / 0-NÃO ");
    scanf("%i", &memoria);
    if(memoria){
      printf("Informe o preço unitário do produto R$ ");
      scanf("%f", &vMemoria);
      printf("Informe a quantidade do produto: ");
      scanf("%i", &qtd);
      total = vMemoria * qtd;
      if(vMemoria < menorMemoria){
        menorMemoria = vMemoria;
        memLoja = cont;
      }
      printf("\n\n-------------------------------------------------------------------------\n\n");
      printf("------ PRODUTO ----- UNITÁRIO ----- QTD --- TOTAL ----\n");
      printf("MEMÓRIA 4GB DDR4 --- R$ %4.2f  ---  %i  --- R$ %4.2f\n", vMemoria, qtd, total);
      acumulador+=total;
      printf("\n\n-------------------------------------------------------------------------\n\n");
    }
    printf("Possui SSD 500GB tipo M2? 1-SIM / 0-NÃO ");
    scanf("%i", &ssd);
    if(ssd){
      printf("Informe o preço unitário do produto R$ ");
      scanf("%f", &vSsd);
      printf("Informe a quantidade do produto: ");
      scanf("%i", &qtd);
      total = vSsd * qtd;
      if(vSsd < menorSsd){
        menorSsd = vSsd;
        ssdLoja = cont;
      }
      printf("\n\n-------------------------------------------------------------------------\n\n");
      printf("------ PRODUTO ----- UNITÁRIO ----- QTD --- TOTAL ----\n");
      printf("SSD 500GB TP  M2 --- R$ %4.2f  ---  %i  --- R$ %4.2f\n", vSsd, qtd, total);
      acumulador+=total;
      printf("\n\n-------------------------------------------------------------------------\n\n");
    }
    printf("Possui placa de Vídeo 2GB? 1-SIM / 0-NÃO ");
    scanf("%i", &video);
    if(video){
      printf("Informe o preço unitário do produto R$ ");
      scanf("%f", &vVideo);
      printf("Informe a quantidade do produto: ");
      scanf("%i", &qtd);
      total = vVideo * qtd;
      if(vVideo < menorVideo){
        menorVideo = vVideo;
        videoLoja = cont;
      }
      printf("\n\n-------------------------------------------------------------------------\n\n");
      printf("------ PRODUTO ----- UNITÁRIO ----- QTD --- TOTAL ----\n");
      printf("PLACA VÍDEO  2GB --- R$ %4.2f  ---  %i  --- R$ %4.2f\n", vVideo, qtd, total);
      acumulador+=total;
      printf("\n\n-------------------------------------------------------------------------\n\n");
    }
    printf("Possui monitor 23"" 4k? 1-SIM / 0-NÃO ");
    scanf("%i", &monitor23);
    if(monitor23){
      printf("Informe o preço unitário do produto R$ ");
      scanf("%f", &vMonitor23);
      printf("Informe a quantidade do produto: ");
      scanf("%i", &qtd);
      total = vMonitor23 * qtd;
      if(vMonitor23 < menorMonitor23){
        menorMonitor23 = vMonitor23;
        mon23Loja = cont;
      }
      printf("\n\n-------------------------------------------------------------------------\n\n");
      printf("------ PRODUTO ----- UNITÁRIO ----- QTD --- TOTAL ----\n");
      printf("MONITOR 23"" R-4K --- R$ %4.2f  ---  %i  --- R$ %4.2f\n", vMonitor23, qtd, total);
      acumulador+=total;
      printf("\n\n-------------------------------------------------------------------------\n\n");
    }
    printf("Possui kit teclado e mouse sem fio? 1-SIM / 0-NÃO ");
    scanf("%i", &teclado);
    if(teclado){
      printf("Informe o preço unitário do produto R$ ");
      scanf("%f", &vTeclado);
      printf("Informe a quantidade do produto: ");
      scanf("%i", &qtd);
      total = vTeclado * qtd;
      if(vTeclado < menorTeclado){
        menorTeclado = vTeclado;
        tecLoja = cont;
      }
      printf("\n\n-------------------------------------------------------------------------\n\n");
      printf("------ PRODUTO ----- UNITÁRIO ----- QTD --- TOTAL ----\n");
      printf("kIT TEC. MOUSE S/F M/S --- R$ %4.2f  ---  %i  --- R$ %4.2f\n", vTeclado, qtd, total);
      acumulador+=total;
      printf("\n\n-------------------------------------------------------------------------\n\n");
    }
    acumulaLoja = acumulador;
    if(acumulaLoja < menorLoja){
        menorLoja = acumulaLoja;
        acLoja = cont;
      }
    printf("Valor total dos produtos da loja %i: R$ %.2f\n\n", cont, acumulador);
    cont++;
    acumulador=0;
  }

  printf("Menor loja - %i ----- R$ %.2f\n\n", acLoja, menorLoja);
  printf("Menor memoria - %i ----- R$ %.2f\n\n", memLoja, menorMemoria);
  printf("Menor SSD - %i ----- R$ %.2f\n\n", ssdLoja, menorSsd);
  printf("Menor Placa de video - %i ----- R$ %.2f\n\n", videoLoja, menorVideo);
  printf("Menor monitor 23 - %i ----- R$ %.2f\n\n", mon23Loja, menorMonitor23);
  printf("Menor teclado - %i ----- R$ %.2f\n\n", tecLoja, menorTeclado);

  return 0;
}

