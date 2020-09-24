#include <stdio.h>

int main(void){
	
	int ano, ver1, ver2;
	int ver3;
	
	printf("\nInforme o ano para saber quantos dias ele possui.\n");
	scanf("%d", &ano);
	
	ver1 = ano % 4;
	ver2 = ano % 400;
	ver3 = ano % 100;
	
	if(((ver1 == 0) && (ver3 !=0)) || (ver2 == 0)){
		printf("\n%d possui 366 dias.\n\n", ano);
	}else{
		printf("\n%d possui 365 dias.\n\n", ano);
	}
	
	
	return 0;
}
