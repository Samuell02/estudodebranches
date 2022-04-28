#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

   
    float peso,pesofinal,pesofinal2; 

    printf("Insira o seu peso :\n");
    scanf("%f",&peso);
    pesofinal=(peso*0.15)+peso;
    pesofinal2=(peso*0.20)+peso;
    printf("a novo peso se a pessoa engordar 15 porcento e  : %.2f\n",pesofinal);
    printf(" a novo peso se a pessoa engordar 20 porcento e  : %.2f\n",pesofinal2);
    system("pause");
    return 0;
}
