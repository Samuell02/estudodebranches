#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1, n2, resultado; 

    printf("Insira o numero a ser subtraido e depois insira o valor que vai ser subtraido do numero:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    resultado=n1-n2;
    printf("a numero restante e : %.2f\n",resultado);
    system("pause");
    return 0;
}
