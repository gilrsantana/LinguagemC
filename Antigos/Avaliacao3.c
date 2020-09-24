#include <stdio.h>

int membro = 0;
int coluna = 3;
int profundidade = 1;
int mn = 0;
int ddd;

int menu(void);

int main(void)
{
    float produto[membro][coluna][profundidade];

    menu();

    do
    {
        if(mn == 1)
        {
            int i = 0;
            int j = 0;
            int k = 0;
            printf("Sessão de Cadastro de código de Produto.\n");
            do
            {
                while(produto[i][j][k] <= 0)
                {
                    i++;
                }
                
                printf("Informe o código do produto (DDD): ");
                scanf("%f", &produto[i][j][k]);
                membro++;
                i++;
                printf("Digite (1) para continuar ou (0) para encerrar.\n");
                scanf("%i", &ddd);
 
            } 
            while (ddd != 0);
            menu();
        }

        if(mn == 2)
        {
            printf("Sessão de Exibição de Código de Produto.\n");
            printf("membro = %i\n", membro);
            printf("coluna = %i\n", coluna);
            printf("profundidade = %i\n", profundidade);
            
            int i = 0;
            int j = 0;
            int k = 0;
            
            for(i = 0; i < membro; i++)
            {
                printf("%f \n", produto[i][j][k]);
            }    
        
            menu();
        }


    } while (mn != -1);
    

    return 0;
}

int menu(void)
{
    printf("Selecione a sessão do programa ou (-1) para sair.\n");
    printf("(1) Cadastrar Código de Produto\n");
    printf("(2) Consultar Produtos cadastrados\n");
    printf("(3) Inserir Preço de Produto\n");
    printf("(4) Consultar Preço de produto\n");

    scanf("%i", &mn);
    return mn;
}