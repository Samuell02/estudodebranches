#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1, n2,n3, resultado; 

    printf("Insira os tres numeros a serem multiplicados, um a um:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    resultado=n1*n2*n3;
    printf("a numero resultante e : %.2f\n",resultado);
    system("pause");
    return 0;
}
