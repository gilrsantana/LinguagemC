/*
Informe os dois maiores inteiros numa sequência fornecida pelo usuário.
*/

#include <stdio.h>

int main(void){
  int quantidade;
  int maior1 = 0;
  int maior2 = 0;
  int i, j;
  printf("Informe a quantidade de entradas: ");
  scanf("%d", &quantidade);

  int vetor[quantidade];
 
  for(i = 0; i < quantidade; i++)
  {
    printf("informe a %dª entrada: ", i+1);
    scanf("%d", &vetor[i]);
  }

  for(i = 0; i < quantidade; i++)
  {
    if(vetor[i] > maior1)
    {
      maior1 = vetor[i];
    }
  }
 
  for(j = 0; j < quantidade; j++)
  {
    if((vetor[j] < maior1) && (vetor[j] > maior2))
    {
      maior2 = vetor[j];
    }
  }

  printf("O primeiro maior número é %d.\n", maior1);
  printf("O segundo maior número é %d.\n", maior2);

  return 0;
}
