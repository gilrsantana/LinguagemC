#include <stdio.h>

int main(void){
	int diaNas, mesNas, anoNas;
	int diaAtual, mesAtual, anoAtual;
	int difAno, difAno1;
	
	printf("\nInforme sua data de nascimento no formato dd/mm/aaaa.\n");
	scanf("%d/%d/%d", &diaNas, &mesNas, &anoNas);
	
	printf("\nInforme a data atual no formato dd/mm/aaaa.\n");
	scanf("\n%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);
	
	difAno = anoAtual - anoNas;
	difAno1 = ( (anoAtual - anoNas) -1);
	
	if ((mesAtual < mesNas) || ((mesAtual == mesNas) && (diaAtual < diaNas))){
		printf("\nVocê tem %d anos de idade.\n", difAno1);
	}else{
		printf("\nVocê tem %d anos de idade.\n", difAno);
	}
	
	
	return 0;
}
