#include <stdio.h>
#include <math.h>

int main(void){
	
	#define LIMITE 50
	#define PESO_RACAO 0.10
	#define MAX_RACAO 150
	
	int qtdGato, qtdDia;
	float gato[LIMITE] = {0};
	float qtdRacao[LIMITE] = {0};
	float totalRacao, ajusteRacao;
	float saco = 0.0;
	
	
	printf("\nInforme a quantidade de gatos:...");
	scanf("%i", &qtdGato);
	while(qtdGato < 1 ||qtdGato > LIMITE)
		{
		printf("\nErro! Insira valores entre 1 e %i\n", LIMITE);
		printf("\nInforme a quantidade de gatos:...");
		scanf("%i", &qtdGato);
		}
			
	printf("\nInforme a quantidade de dias:...");
	scanf("%i", &qtdDia);
	
	for (int i=0; i<qtdGato; i++)
		{
			printf("\nInsira o peso em gramas do gato %i:...", i+1);
			scanf("%f", &gato[i]);
			qtdRacao[i] = gato[i] * PESO_RACAO;
			
			if (qtdRacao[i] > MAX_RACAO)
				{
				qtdRacao[i] = MAX_RACAO;
				}else{
				qtdRacao[i] = gato[i] * PESO_RACAO;
				}
		
		}			
		for(int t=0; t<qtdGato; t++)
			{
			totalRacao += qtdRacao[t];
			}
					
		ajusteRacao = ((totalRacao * qtdDia) / 3000);
		saco = ceil(ajusteRacao);
		
		printf("\nSerão necesários %.0f saco(s) de 3kg de ração para alimentar %i gato(s) por %i dias\n\n", saco, qtdGato, qtdDia);
	
	return 0;
}
