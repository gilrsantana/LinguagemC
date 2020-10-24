/* 
 * A empresa XPTO possui as seguintes informações dos seus departamentos:
 * (a)Código do departamento (inteiro);
 * (b)Quantidade de funcionários do departamento (inteiro);
 * (c)Para cada funcionário do departamento:
 * - Matrícula (inteiro);
 * - Quantidade de dependentes (inteiro);
 * - Salário (real).
 * 
 * a)Faça a função "umDepartamento" que receba como parâmetros a quantidade (n) de funcionários 
 * do departamento e dois ponteiros para inteiro. 
 * Esta função deverá ler os dados dos n funcionários do departamento e armazenar, nas variáveis
 * cujos endereços são fornecidos na chamada da função, a quantidade de funcionários com até 5 
 * dependentes que ganham mais de 5000,00 e a quantidade de funcionários com mais de 5 
 * dependentes que ganham mais de 5000,00.
 * 
 * Protótipo da função: void umDepartamento(int n, int *qtate5, int *qtacima);
 * 
 * b)Faça um programa que leia os dados dos departamentos ( término nº do departamento == 0) e, 
 * utilizando a função acima, exiba a quantidade de funcionários com até 5 dependentes 
 * que ganham mais de 5000,00 e a quantidade de funcionários com mais de 5 dependentes 
 * que ganham mais de 5000,00.
 */


#include <stdio.h>

#define REF_SALARIO 5000.00
#define REF_DEPENDENTE 5

void umDepartamento(int n, int *qtate5, int *qtacima);

int main(void){
	int departamento, funcionario, qtate5=0, qtacima=0;

	printf("Informe o código do departamento ou 0 para sair: ");
	scanf("%i", &departamento);
	while(departamento){
		printf("Informe a quantidade de funcionários: ");
		scanf("%i", &funcionario);
		umDepartamento(funcionario, &qtate5, &qtacima);
		printf("Informe o código do próximo departamento ou 0 para sair: ");
		scanf("%i", &departamento);
	}
	
	printf("\n***************************** TOTALIZAÇÕES ****************************\n");
	printf("Funcionários com ganhos acima de %.2f e menos de %i dependentes... %i\n",
	 REF_SALARIO, REF_DEPENDENTE, qtacima);
	printf("Funcionários com ganhos acima de %.2f e mais de %i dependentes.... %i\n",
	 REF_SALARIO, REF_DEPENDENTE, qtate5);
	printf("***********************************************************************\n");
	
	return 0;	
}
void umDepartamento(int n, int *qtate5, int *qtacima){
	int matricula, qtdDependente, i=1;
	float salario;
	
	while(i <= n){
		printf("\n**** Funcionário %i ****\n", i);
		printf("Informe a matrícula: ");
		scanf("%i", &matricula);
		printf("Informe a quantidade de dependentes: ");
		scanf("%i", &qtdDependente);
		printf("Informe o salário: ");
		scanf("%f", &salario);
		
		if(salario > REF_SALARIO){
			if(qtdDependente > REF_DEPENDENTE){
				(*qtate5)++;
			}else{
				(*qtacima)++;
			}	
		}
		i++;
	}
	printf("\n");
	return;
}
