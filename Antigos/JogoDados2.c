#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
   
    int contador;
    int face;

    int frequencia1 = 0;
    int frequencia2 = 0;
    int frequencia3 = 0;
    int frequencia4 = 0;
    int frequencia5 = 0;
    int frequencia6 = 0;

    for(contador = 1; contador <= 6000; contador++)
    {
        face = 1 + (rand() % 6);

        switch(face)
        {
            case 1:
                frequencia1++;
                break;
            case 2:
                frequencia2++;
                break;
            case 3:
                frequencia3++;
                break;
            case 4:
                frequencia4++;
                break;
            case 5:
                frequencia5++;
                break;
            case 6:
                frequencia6++;
                break;
        }
        
    }
    printf("Face\tFrequência\n");
    printf("   1 %12d\n", frequencia1);
    printf("   2 %12d\n", frequencia2);
    printf("   3 %12d\n", frequencia3);
    printf("   4 %12d\n", frequencia4);
    printf("   5 %12d\n", frequencia5);
    printf("   6 %12d\n", frequencia6);
    return 0;

}