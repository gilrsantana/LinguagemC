#include <stdio.h>

int main(void){
	
	#define II 0.5
	#define ICMS 0.03
	
	int tipo;
	float vlrBasico, vlrIi, vlrIcms, vlrNac, vlrImp, txEnt; 
	
	printf("\nInforme o valor do produto.\n");
	scanf("%f", &vlrBasico);
	
	while(tipo < 1 || tipo > 2){
		printf("\nInforme o tipo do produto.\n");
		printf("\n1 - Nacional");
		printf("\n2- Importado\n");
		
		scanf("%d", &tipo);
		
		switch(tipo)
		{
			case 1:
			vlrIcms = (vlrBasico * ICMS);
			txEnt = ((vlrBasico * 0.10) + (vlrIcms * 0.02));
			vlrNac = (vlrBasico + vlrIcms + txEnt);
			printf("\nValor Básico do produto:......R$ %.2f", vlrBasico);
			printf("\nValor ICMS:...................R$ %.2f", vlrIcms);
			printf("\nTaxa de entrega:..............R$ %.2f", txEnt);
			printf("\nValor total:..................R$ %.2f\n\n", vlrNac);
			break;
			
			case 2:
			vlrIi = (vlrBasico * II);
			vlrIcms = ((vlrBasico + vlrIi) * ICMS);
			txEnt = ((vlrBasico * 0.10) + (vlrIcms * 0.02));
			vlrImp = (vlrBasico + vlrIi + vlrIcms + txEnt);
			printf("\nValor Básico do produto:......R$ %.2f", vlrBasico);
			printf("\nValor Imposto de Importação:..R$ %.2f", vlrIi);
			printf("\nValor ICMS:...................R$ %.2f", vlrIcms);
			printf("\nTaxa de entrega:..............R$ %.2f", txEnt);
			printf("\nValor total:..................R$ %.2f\n\n", vlrImp);
			break;
		}
			
	}
		
	
	return 0;
}
