#include <stdio.h>

int main(void){
	
		int age;
		
		printf("\nInforme sua idade para saber seu status eleitoral.\n");
		scanf("%d", &age);
		
		if (age >= 18 && age <= 65){
			printf("\nVocê é obrigado a votar.\n");
		}else if ((age >=16 && age <=19)||(age > 65)){
			printf("\nVocê é eleitor opcional.\n");
		}else{
			printf("\nVocê não pode votar.\n");
		}
	
	
	return 0;
}	

