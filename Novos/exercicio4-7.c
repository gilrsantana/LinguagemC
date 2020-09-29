/* 
 * Com o slogan "dinheiro puxa dinheiro" uma financeira realiza a seguinte promoção:
 * A taxa de juros cresce 0,2% a cada 3 meses e 2% a cada 2 meses
 * Sempre que o valor aplicado for múltiplo de 13, há um prêmio incorporado à aplicação de 1000,00
 * Faça uma função que receba o valor inicial aplicado, a taxa de juros inicial e a quantidade de meses
 * a aplicar, mostrando, mês a mês, a taxa de juros utilizada e o montante reajustado. 
 * Caso ocorra a incorporação do prêmio, deve ser enviado uma mensagem.
 */

#include <stdio.h>

int main(void){

  int mesAplicado, i=1;
  float juro2meses=0.02, juro3meses=0.002, aplicado, juro,rendimento, total, bonus13=1000;

  printf("Informe o valor inicial aplicado: ");
  scanf("%f", &aplicado);
  printf("Informe o período em meses da aplicação: ");
  scanf("%d", &mesAplicado);
  printf("Informe a tx de juros inicial: ");
  scanf("%f", &juro);

  while(i <= mesAplicado){
    if(i % 2 == 0){
      juro = (juro) + ((juro)*juro2meses);
    }
    if(i % 3 == 0){
      juro = (juro) + ((juro)*juro3meses);
    }
    if((int)aplicado % 13 == 0){
      aplicado = aplicado + 1000;
      printf("***BÔNUS DE R$ 1000,00***\n");
    }
    rendimento = aplicado * (juro/100);
    aplicado = aplicado + rendimento;
    printf("Mês %2i - Rendimento: %9.2f - Acumulado: %9.2f\n", i, rendimento, aplicado);
    i++;
  }
  printf("\n*******************************\n");
  printf("\tValor final: %9.2f\n",aplicado);
  printf("*******************************\n");
  return 0;
}