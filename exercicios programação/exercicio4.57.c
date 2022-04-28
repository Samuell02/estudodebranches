#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,n3;
    printf("Digite a primeira nota :\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota :\n");
    scanf("%f",&n2);
    printf("Digite a terceira nota :\n");
    scanf("%f",&n3);


 if ((n2>n1)&&(n3>n1)&&(n3>n2)){
printf ("a ordem crescente eh:");
 printf ("numero menor: %.2f\n",n1);
 printf ("numero do meio: %.2f\n",n2);
 printf ("numero maior: %.2f\n",n3);

 }

 if ((n2>n1)&&(n3>n1)!=(n3>n2)){
    printf ("a ordem crescente eh:");
 printf ("numero menor: %.2f\n",n1);
 printf ("numero do meio: %.2f\n",n3);
 printf ("numero maior: %.2f\n",n2);

 }

 if ((n2<n1)&&(n3>n2)&&(n3>n1)){
    printf ("a ordem crescente eh:");
 printf ("numero menor: %.2f\n",n2);
 printf ("numero do meio: %.2f\n",n1);
 printf ("numero maior: %.2f\n",n3);

 }

 if ((n2<n1)&&(n3>n2)!=(n3>n1)){
    printf ("a ordem crescente eh:");
 printf ("numero menor: %.2f\n",n2);
 printf ("numero do meio: %.2f\n",n3);
 printf ("numero maior: %.2f\n",n1);

 }


if ((n3<n1)&&(n3>n2)&&(n1<n2)){
    printf ("a ordem crescente eh:");
 printf ("numero menor: %.2f\n",n3);
 printf ("numero do meio: %.2f\n",n1);
 printf ("numero maior: %.2f\n",n2);

 }

 if ((n2<n1)&&(n3>n2)!=(n2>n1)){
    printf ("a ordem crescente eh:");
 printf ("numero menor: %.2f\n",n3);
 printf ("numero do meio: %.2f\n",n1);
 printf ("numero maior: %.2f\n",n2);

 }

 }


