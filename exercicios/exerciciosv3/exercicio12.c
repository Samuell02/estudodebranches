#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,r1,r2;
    printf("Digite dois numeros:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    r1=pow(n1,n2);
    r2 =pow(n2,n1);
    printf("O primeiro numero elevado ao segundo eh: %.2f\n",r1);
    printf("O segundo numero elevado ao primeiro eh: %.2f\n",r2);
    system("pause");
    return 0;
}
