#include <stdio.h>

int main(void)
{
    int linha = 3;
    int coluna = 3;

    float matriz[linha][coluna];
    
    for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                printf("Informe o código do produto: ");
                scanf("%f", &matriz[i][j]);
            }
            
        }
    for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                printf("%.f   ", matriz[i][j]);
            }   
            printf("\n");
        }
    return 0;
}