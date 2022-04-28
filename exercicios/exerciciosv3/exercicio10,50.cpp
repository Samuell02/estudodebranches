#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

   
    float lado,area;

    printf("Insira o tamanho do lado do quadrado:\n");
    scanf("%f",&lado);
    area=lado*lado;
    printf("a area do quadrado e  : %.2f\n",area);
    system("pause");
    return 0;
}
