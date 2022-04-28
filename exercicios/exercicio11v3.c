#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,quad,cubo;
    float raizQ,raizC;
    printf("Digite um numero:\n");
    scanf("%f",&num);
    quad= pow(num,2);
    cubo= pow(num,3);
    raizQ=sqrt(num);
    raizC=cbrt(num);
    printf("O numero digitado ao quadrado e: %.2f\n",quad);
    printf("O numero digitado ao cuboe: %.2f\n",cubo);
    printf("A raiz quadrada do numero digitado e: %.2f\n",raizQ);
    printf("A raiz cubica do numero digitado e: %.2f\n",raizC);
    system("pause");
    return 0;
}
