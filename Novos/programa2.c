/*
 * Nome: Gilmar Ribeiro Santana
 * Turma: A
 * Turno: Noite
 * Questão 2
 * 
 * 2.Uma loja oferece um bônus para seus clientes no ato de uma compra. 
 * O valor desse bônus depende do valor da última compra (uc) do cliente 
 * e de quando esta compra foi realizada. A regra para o cálculo do bônus 
 * é a seguinte:
 * •	Se uc realizada há no máximo 3 meses, o valor do bônus será igual 
 * a 20% do valor da uc;
 * •	Se uc realizada entre 4 e 6 meses atrás, o valor do bônus será 
 * igual a 10% do valor da uc;
 * •	Se uc realizada há mais de 6 meses, o valor do bônus será igual 
 * a 5% do valor da uc.
 * 
 * Observação: Caso o valor do bônus seja maior do que o valor da compra atual,
 * o valor a ser pago será igual a zero.
 * Escreva um programa que leia o valor da compra atual, o valor da última 
 * compra e há quantos meses essa compra foi realizada, e exiba o valor 
 * que será efetivamente pago pelo cliente, com duas casas decimais. 
 * O seu programa deverá usar, obrigatoriamente, as funções bonusCliente 
 * e calculaValorComBonus, que serão implementadas por você.
 * 
 * A função bonusCliente receberá como parâmetros o valor da última compra 
 * e há quantos meses ela foi realizada, e retornará o valor do bônus.
 * 
 * A função calculaValorComBonus receberá como parâmetros o valor da última 
 * compra, há quantos meses ela foi realizada e o valor da compra atual, 
 * e retornará o valor a ser efetivamente pago pelo cliente, que será igual 
 * ao valor da compra atual menos o valor do bônus. 
 * 
 * A função calculaValorComBonus terá de chamar a função bonusCliente para 
 * realizar o cálculo do valor a ser pago.
 * 
 */

#include <stdio.h>

float bonusCliente(float valor, int periodo);
float calculaValorComBonus(float valor1, int parametro, float valor2);

int main(){
	float uc, compAtual,vlComBonus, finalCompra;
	int mesCompra;
	
	printf("informe o valor da compra atual: ");
	scanf("%f", &compAtual);
	printf("informe o valor da última compra: ");
	scanf("%f", &uc);
	printf("Há quantos meses foi sua última compra? ");
	scanf("%i", &mesCompra);
	vlComBonus = calculaValorComBonus(uc, mesCompra, compAtual);
	
	if(vlComBonus > compAtual){
		finalCompra = 0;
	}else{
		finalCompra = vlComBonus;
	}
	
	printf("Valor a pagar ..... R$ %.2f\n", finalCompra);
	
	return 0;
}


float bonusCliente(float valor, int periodo){
	float bonus;
	if(periodo <= 3){
		bonus = valor * (20/100.00);
	}else{
		if(periodo <= 6){
			bonus = valor * (10/100.00);
		}else{
			bonus = valor * (5/100.00);
		}
	}
	return bonus;
}

float calculaValorComBonus(float valor1, int parametro, float valor2){
	float valor, bonus;
	
	bonus = bonusCliente(valor1, parametro);
	printf("Bonus = %.2f\n", bonus);
	valor = valor2 - bonus;
	
	return valor;
}











