#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2;
    printf("Digite o primeiro numero :\n");
    scanf("%f",&n1);
    printf("Digite o segundo numero :\n");
    scanf("%f",&n2);




 if (n1>n2)  {
         printf ("o maior numero e: %.2f\n",n1);

    }
else if (n2>n1) {
         printf (" o maior numero e: %.2f\n",n2);

    }
else if (n1=n2){
         printf ("os numeros sao: %.2f\n",n1,n2);
    printf("Os dois sao o mesmo numero");
    }




}
