#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    int n1,n2,i,r,r2;
    printf("Digite o numero correspondete a opcao:\n");
    printf("1- o primeiro numero elevado ao segundo:\n");
    printf("2- raiz quadrada de cada um dos numeros:\n");
    printf("3- raiz cubica de cada um dos numeros:\n");
    scanf("%d",&i);

    if (i>3 || 1>i){
            printf("opcao invalida\n");
    abort();

    }
    printf("Digite o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&n2);


 if (i==1) {
        r=pow(n1, n2);

   printf ("%d\n",r);
    }
else if (i==2) {

                r=sqrt(n1);
                r2=sqrt(n2);
    printf ("%d\n",r);
    printf ("%d\n",r2);


    }
else if (i==3) {
        r=cbrt(n1);
        r2=cbrt(n2);
printf("%d\n",r);
printf("%d\n",r2);
    }



}
