#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    int n1,n2,i,r;
    printf("Digite o numero correspondete a opcao:\n");
    printf("1- media dos dois numeros digitados:\n");
    printf("2- diferenca do maior pelo menor:\n");
    printf("3- produto entre os numeros digitados:\n");
    printf("4- divisao do primeiro pelo segundo:\n");
    scanf("%d",&i);

    if (i>4 || 1>i){
            printf("opcao invalida\n");
    abort();

    }
    printf("Digite o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&n2);


 if (i==1) {
        r=(n1+n2)/2;

   printf ("%d\n",r);
    }
else if (i==2) {
        if (n1>n2){
                r=n1-n2;
    printf ("%d\n",r);

        }
        else if (n2>n1){
            r=n2-n1;
            printf ("%d\n",r);
        }

    }
else if (i==3) {
        r=n1*n2;
printf("%d\n",r);
    }
else if (i==4) {
        r=n1/n2;
printf("%d\n",r);
    }

    if (i>4 || 1>i){
            printf("opcao invalida\n");
    abort();

    }


}
