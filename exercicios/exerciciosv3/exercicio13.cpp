#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float pes,polegadas,jardas,milhas;
    printf("Digite o numero de pes numeros:\n");
    scanf("%f",&pes);
    polegadas=pes*12;
    jardas=pes/3;
    milhas=jardas/1760;
    printf("O numero de pes convertido em polegadas eh: %.2f\n",polegadas);
    printf("O numero de pes convertido em  jardas  eh : %.2f\n",jardas);
    printf("O numero de pes convertido em  milhas eh : %.3f\n",milhas);
     
    
    system("pause");
    return 0;
}
