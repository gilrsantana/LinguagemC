#include <stdio.h>

int main(void){
	char string[100];
	int i = 0;
	FILE *fp;
	
	fp = fopen("TESTE", "a");
	printf("Entre com a string a sergravada no arquivo\n");
	gets(string);
	
	for(; string[i]; i++){
		fputc(string[i], fp);
	}
	
	fclose(fp);
	return 0;
}
