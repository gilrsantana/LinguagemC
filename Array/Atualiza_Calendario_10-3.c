#include <stdio.h>

void atualizaData(int vetor1[], int vetor2[]){
	int diaMes;

	diaMes = vetor1[1] -1;

	if( (vetor1[0] == vetor2[diaMes]) && (vetor1[1] == 12) ){
		vetor1[0] = vetor1[1] = 1;
		vetor1[2]++;
	}else{
		if(vetor1[0] == vetor2[diaMes]){
			vetor1[0] = 1;
			vetor1[1]++;
		}else{
			vetor1[0]++;
		}
	}

	printf("%d/%d/%d\n", vetor1[0], vetor1[1], vetor1[2]);
}

int main(void){

	int data[3]; //{dd, mm, aaaa}
	int calendario[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Informe o dia: ");
	scanf("%i", &data[0]);
	printf("Informe o mês: ");
	scanf("%i", &data[1]);
	printf("Informe o ano: ");
	scanf("%i", &data[2]);

	if(data[2]%4==0 || data[2]%400==0){
		calendario[1] = 29;
	}

	if(data[0] > calendario[data[1]-1] || data[1] > 12 || data[2] > 2100){
		printf("Data inválida\n");
	}else{
		atualizaData(data, calendario);
	}

	return 0;
}
