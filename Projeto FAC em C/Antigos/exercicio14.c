#include <stdio.h>

int main(void){
	
	#define LEVEL1 0.50
	#define LEVEL2 0.80
	
	float vlrDisponivel, vlrPresente, vlrPago, vlrParcela;
	float vlrLevel1, vlrLevel2;
	char pcento = '%';
	
	printf("\nInforme o valor disponível para compras: R$ ");
	scanf("%f", &vlrDisponivel);
	
	printf("\nInforme o valor do presente: R$ ");
	scanf("%f", &vlrPresente);
	
	vlrLevel1 = (vlrDisponivel * LEVEL1);
	vlrLevel2 = (vlrDisponivel * LEVEL2);
	
	if (vlrPresente >= vlrLevel2){
		vlrPago = (vlrPresente * 1.10);
		vlrParcela = (vlrPago / 5);
		printf("\nVocê atingiu o nível 2 (80%c) de valor disponível.", pcento);
		printf("\nO valor pago será R$ %.2f dividido em 5 parcelas de R$ %.2f.\n\n", vlrPago, vlrParcela);
	}else if ((vlrPresente >= vlrLevel1) && (vlrPresente < vlrLevel2)){
		vlrPago = (vlrPresente * 1.08);
		vlrParcela = (vlrPago / 3);
		printf("\nVocê atingiu o nível 1 (50%c) de valor disponível.", pcento);
		printf("\nO valor pago será R$ %.2f dividido em 3 parcelas de R$ %.2f.\n\n", vlrPago, vlrParcela);
	}else{
		vlrPago = (vlrPresente - (vlrPresente * 0.05));
		printf("\nVocê não atingiu o nível 1 (50%c) de valor disponível.", pcento);
		printf("\nO valor pago será R$ %.2f com 5%c de desconto porpagamento à vista.\n\n", vlrPago, pcento);
	}
	
	
	return 0;
}
