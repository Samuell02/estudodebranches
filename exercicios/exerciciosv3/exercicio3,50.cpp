#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1, n2, resultado; 

    printf("Insira o numero a ser dividido, e entao insira o valor pelo qual vai ser dividido:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    resultado=n1/n2;
    printf("a numero resultante e : %.2f\n",resultado);
    system("pause");
    return 0;
}
