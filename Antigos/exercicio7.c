#include <stdio.h>

int main(void){
	
	int cor, dist;
	
	while(cor<1 || cor>3){
		printf("\nEscolha o número da cor desejada para saber como agir no semáforo.");
		printf("\n1 - Vermelho");
		printf("\n2 - Amarelo");
		printf("\n3 - Verde\n\n");
		
		scanf("%d", &cor);
		
		switch(cor)
		{
			case 1:
			printf("\nVocê deve parar.\n\n");
			break;
			
			case 2:
			printf("\nA quantos metros você está do cruzamento?\n");
			scanf("%d", &dist);
			if (dist < 5){
				printf("\nSiga com cautela.\n\n");
			}else{
				printf("\nVocê deve parar.\n\n");
			}
			break;
			
			case 3:
			printf("\nVocê pode passar.\n\n");
			break;
		}
	}
			
	return 0;
}
