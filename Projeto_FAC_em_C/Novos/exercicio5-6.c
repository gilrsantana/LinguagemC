/*
 * O MICODONALDS fez um acordo de compra com vários fabricantes de brinquedos para pacotes surpresas do
 * MicoLanche Dourado. Os fabricantes entregam os brinquedos embalados em caixas de formato retangular de
 * tamanhos variados. 
 * Para chamar mais atenção das crianças, o MICODONALDS pretende re-embalar estas caixas em esferas coloridas
 * de plástico. 
 * As esferas são fornecidas com quatro diâmetros diferentes: 10, 15, 20 e 25cm.
 * O diâmetro da esfera capaz de armazenar uma determinada caixa retangular é determinado em função da
 * diagonal desta caixa, pois é sua maior medida. 
 * A diagonal de um caixa retangular e é calculada por: D² = A²+B²+C² onde A, B e C são as dimensões da 
 * caixa.
 * Para encomendar as esferas, o MICODONALDS precisa saber quantas esferas de cada diâmetro ele necessita. 
 * Portanto, faça um programa, modularizado, para obter do teclado o código e as dimensões dos brinquedos 
 * e exibir, para cada brinquedo, o diâmetro da esfera que o embalará. No final, devem ser exibidas as 
 * quantidades totais de cada um dos tipos de embalagem. 
 * Término da entrada de dados código negativo.
 * Seu programa será considerado modularizado se tiver pelo menos 2 funções além da principal
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ESFERA1 10
#define ESFERA2 15
#define ESFERA3 20
#define ESFERA4 25

float calcularDiagonal(float medida1, float medida2, float medida3);
int testarDiagonal(float medida);

int main(void){
  int codigo, qtdEsfera1, qtdEsfera2, qtdEsfera3, qtdEsfera4, adequada, diametro;
  float diagonal;
  float altura, largura, profundidade;
  qtdEsfera1=qtdEsfera2=qtdEsfera3=qtdEsfera4=0;

  printf("Informe o código do produto ou 0 para sair: ");
  scanf("%i", &codigo);

  while (codigo != 0){
    printf("informe as dimensões do produto.\n");
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Largura: ");
    scanf("%f", &largura);
    printf("Profundidade: ");
    scanf("%f", &profundidade);

    diagonal = calcularDiagonal(altura, largura, profundidade);
    adequada = testarDiagonal(diagonal);
    if(adequada == 0){
      printf("Não existe esfera adequada para o produto.\n");
    }else{
      if(adequada ==1){
        diametro = ESFERA1;
        qtdEsfera1++;
      }else if(adequada == 2){
        diametro = ESFERA2;
        qtdEsfera2++;
      }else if(adequada == 3){
        diametro = ESFERA3;
        qtdEsfera3++;
      }else if(adequada == 4){
        diametro = ESFERA4;
        qtdEsfera4++;
      }
    printf("\nCódigo %i - Esfera de %icm - \n\n", codigo, diametro);
    } 
     
    printf("Informe o código do produto ou 0 para sair: ");
    scanf("%i", &codigo);
  }
  
  printf("\nEsferas do modelo 1 com %icm de diâmetro >>> %2i\n", ESFERA1, qtdEsfera1);
  printf("Esferas do modelo 2 com %icm de diâmetro >>> %2i\n", ESFERA2, qtdEsfera2);
  printf("Esferas do modelo 3 com %icm de diâmetro >>> %2i\n", ESFERA3, qtdEsfera3);
  printf("Esferas do modelo 4 com %icm de diâmetro >>> %2i\n", ESFERA4, qtdEsfera4);

  return 0;
}
//Calcula a diagonal do produto
float calcularDiagonal(float medida1, float medida2, float medida3){
  float diagonal = sqrt(pow(medida1,2) + pow(medida2,2) + pow(medida3,2));
  return diagonal;
}

//Testa a diagonal de acordo com o diâmetro das esferas
int testarDiagonal(float medida){
  int adequada;
  if(medida <= ESFERA1){
    adequada = 1;
  }else{
    if(medida <= ESFERA2){
      adequada = 2;
    }else{
      if(medida <= ESFERA3){
        adequada = 3;
      }else{
        if(medida <= ESFERA4){
          adequada = 4;
        }else
        {
          adequada = 0;
        }
        
      }
    }
  }
  return adequada;
}