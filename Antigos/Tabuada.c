include <stdio.h>

int main(void){
  int numero;
  
  printf("Informe o número: ");
  scanf("%d", &numero);

  printf("N\t %d*N\t %d0*N\t %d00*N\n", numero, numero, numero); 

  for(int i = 1; i <=10; i++)
  {
    printf("%d\t %d\t %d\t %d\n", i, numero * i, i * 10 * numero, i * 100 * numero);
  }

  return 0;
}

