#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float  pes,polegadas,jardas,milhas;

    printf("quantos pes:\n");
    scanf("%f",&pes);

    polegadas= pes*12;
    jardas= pes/3;
    milhas= pes/1760;
    printf("isso convertido em polegadas fica: %.2f\n",polegadas);
    printf("isso convertido em  jardas fica: %.2f\n",jardas);
    printf("isso convertido em milhas fica: %.2f\n",milhas);

    system("pause");
    return 0;
}
