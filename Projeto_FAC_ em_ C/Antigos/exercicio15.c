#include <stdio.h>

int main(void){
	
	float tipo[3] = {0.0};
	float ponto[3] = {0.0};
	float medalha[3] = {6.0,3.0,1.0};
	float premio[3] = {50000.00, 200000.00, 400000.00};
	float pontoTotal, valor;
	
	printf("\nAs medalhas de tipo 1 representam medalhas de OURO.");
	printf("\nAs medalhas de tipo 2 representam medalhas de PRATA.");
	printf("\nAs medalhas de tipo 3 representam medalhas de BRONZE.\n");		
	for(int i=0; i<3; i++)
	{
		printf("\nInforme o número de medalhas tipo %i >>> ", i+1);
		scanf("%f", &tipo[i]);
		ponto[i] = (medalha[i] * tipo[i]);
		pontoTotal += (ponto[i]);
	}
				
		if(pontoTotal <= 10)
		{
			valor = (pontoTotal * premio[0]);
			printf("\nVocê conseguiu %.0f pontos e receberá o valor de R$ %.2f.\n\n", pontoTotal, valor);
		}
		else if((pontoTotal > 10) && (pontoTotal <= 20))
		{
			valor = (pontoTotal * premio[1]);
			printf("\nVocê conseguiu %.0f pontos e receberá o valor de R$ %.2f.\n\n", pontoTotal, valor);	
		}
		else
		{
			valor = ((pontoTotal * premio[2])+(10000.00 * tipo[0]));
			printf("\nVocê conseguiu %.0f pontos e receberá o valor de R$ %.2f.\n\n", pontoTotal, valor);			
		}
	
	
	return 0;
}
