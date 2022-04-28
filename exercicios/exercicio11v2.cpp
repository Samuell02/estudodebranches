#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n1,quadrado,raizquadrada,cubo,raizcubica;
    printf("Digite um numero:\n");
    scanf("%f",&n1);
    quadrado=pow(n1,2);
    cubo=pow(n1,3);
    raizquadrada=sqrt(n1);
    raizcubica=cbrt(n1);
    printf("O numero digitado ao quadrado e: %.2f\n",quadrado);
    printf("O numero digitado ao cuboe: %.2f\n",cubo);
    printf("A raiz quadrada do numero digitado e: %.2f\n",raizquadrada);
    printf("A raiz cubica do numero digitado e: %.2f\n",raizcubica);
    system("pause");   
    return 0;
}
