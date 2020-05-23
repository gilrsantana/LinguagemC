#include <stdio.h>
#include <math.h>


int main(void)
{
	double x, y;
	
	x= 900.0;
	y = sqrt(x);
	printf("A raiz quadrada de %.1f é %.1f\n", x, y);
	
	x = 2;
	y = exp(x);
	printf("Exponencial de %f é %f\n", x, y);
	printf("Log de %f é %f\n", y, log(y));
	printf("Log10(900) é %f\n", log10(900)); 
	printf("O valor absoluto de 13.7 é |%f| e de -13.7 é |%f|\n", fabs(13.7), fabs(-13.7));
	printf("7.4 arredondando pra cima é: %f\n", ceil(7.4));
	printf("7.4 arredondando pra baixo é : %f\n", floor(7.4));
	printf("2 elevado ao cubo é igual a : %f\n", pow(2, 3));
	return 0;
}
