#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    int n1,n2,n3;
    printf("Digite o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d",&n3);

 if (n1>n2 && n1>n3) {
   printf ("%d\n",n1);
    }
else if (n2>n1 && n2>n3) {
    printf("%d\n",n2);
    }
else if (n3>n1 && n3>n2) {
printf("%d\n",n3);
    }

}
