
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
int n1, n2, r,i ;

printf("Digite o Valor I :\n");
scanf("%d",&i);


if (i == 1){
 printf("Digite o primeiro numero c:\n");
scanf("%d",&n1);

printf("Digite o segundo numero:\n");
scanf("%d",&n2);

r=n1+n2;

printf ("o resultado e: %d\n",r);

        }

 else if (i == 2){
 printf("Digite o numero do qual extrair a raiz quadrada:\n");
scanf("%d",&n1);



r=sqrt(n1);

printf ("o resultado e: %d",r);

        }
}

