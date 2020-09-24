#include <stdio.h>

int main(void){

	int a,b,c;
	
	printf("Informe o valor do primeiro número:.......");
	scanf("%i", &a);
	
	printf("\nInforme o valor do segundo número:......");
	scanf("%i", &b);
	
	printf("\nInforme o valor do terceiro número:.....");
	scanf("%i", &c);
	
	if (a<b && a<c && b<c){
		printf("\n%i....%i....%i\n\n", a, b, c);
	}else if (a<b && a<c && c<b){
		printf("\n%i....%i....%i\n\n", a, c, b);
	}else if (b<a && b<c && a<c){
		printf("\n%i....%i....%i\n\n", b, a, c);
	}else if (b<a && b<c && c<a){
		printf("\n%i....%i....%i\n\n", b, c, a);
	}else if (c<a && c<b && a<b){
		printf("\n%i....%i....%i\n\n", c, a, b);
	}else{
		printf("\n%i....%i....%i\n\n", c, b, a);
	}
	
	return 0;
}
