
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
int a, b, c, i;

printf("Digite o Valor I :\n");
scanf("%d",&i);
printf("Digite o Valor a:\n");
scanf("%d",&a);
printf("Digite o Valor b:\n");
scanf("%d",&b);
printf("Digite o Valor c:\n");
scanf("%d",&c);

if (i == 1){
 if ((a < b) && (a > c)  ){
        if (c > b){ printf ("a ordem crescente eh:\n");
 printf (" %d\n",a);
 printf (" %d\n",b);
 printf (" %d\n",c);


        }
        else{
 printf ("a ordem crescente eh:\n");
 printf (" %d\n",a);
 printf (" %d\n",c);
 printf (" %d\n",b);

        }
}

 if (a < b  && c < b){
        if (a < c){

printf ("a ordem crescente eh:\n");
 printf (" %d\n",b);
 printf (" %d\n",a);
 printf (" %d\n",c);
        }
        else{
             printf ("a ordem crescente eh:\n");
 printf (" %d\n",b);
 printf (" %d\n",c);
 printf (" %d\n",a);
        }


        }

        if (c < a  && c > b){
                if (a < b){
 printf ("a ordem crescente eh:\n");
 printf (" %d\n",c);
 printf (" %d\n",a);
 printf (" %d\n",b);

                }
                else{
printf ("a ordem crescente eh:\n");
 printf (" %d\n",c);
 printf (" %d\n",b);
 printf (" %d\n",a);
                }
        }

}
if (i == 3){
        if ((a > b) && (a > c) ){
         printf ("a ordem desejada eh:\n");
 printf (" %d\n",b);
 printf (" %d\n",a);
 printf (" %d\n",c);
        }

        if ((a < b) && (b > c) ){
         printf ("a ordem desejada eh:\n");
 printf (" %d\n",a);
 printf (" %d\n",b);
 printf (" %d\n",c);

 if ((a < c) && (b < c) ){
         printf ("a ordem desejada eh:\n");
 printf (" %d\n",a);
 printf (" %d\n",c);
 printf (" %d\n",b);

 }






}
}
}
