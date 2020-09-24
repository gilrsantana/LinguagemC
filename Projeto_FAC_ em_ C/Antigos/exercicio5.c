#include <stdio.h>

int main(void){
	
	int diaSem;
	
	while(diaSem<1 || diaSem>7){
		
		printf("\nEscolha o dia da semana:\n");
		printf("\n1 - Domingo");
		printf("\n2 - Segunda-feira");
		printf("\n3 - Terça-feira");
		printf("\n4 - Quarta-feira");
		printf("\n5 - Quinta-feira");
		printf("\n6 - Sexta-feira");
		printf("\n7 - Sábado\n\n");
		
		scanf("%d", &diaSem);
		
		switch (diaSem)
		{
			case 1:
			printf("\nDomingo é final de semama.\n");
			break;
			
			case 2:
			printf("\nSegunda-feira é dia de semana.\n");
			break;
			
			case 3:
			printf("\nTerça-feira é dia de semana.\n");
			printf("\nHoje tem aula de Fac.\n");
			printf("\nAi que loucura!\n");
			break;
			
			case 4:
			printf("\nQuarta-feira é dia de semana.\n");
			break;
			
			case 5:
			printf("\nQuinta-feira é dia de semana.\n");
			break;
			
			case 6:
			printf("\nSexta-feira é dia de semana.\n");
			break;
			
			case 7:
			printf("\nSábado é final de semana.\n");
			break;
		}
	}
	
	return 0;
}
