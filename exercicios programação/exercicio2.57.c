#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,n3,p1,p2,p3,media;
    printf("Digite a primeira nota :\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota :\n");
    scanf("%f",&n2);
    printf("Digite a terceira nota :\n");
    scanf("%f",&n3);
    p1=2;
    p2=3;
    p3=5;
    media=(n1+n2+n3)/3;
     printf ("media : %.2f\n",media);




 if ((media>=7)&&(media<=10)) {
    printf("Aprovado");
    }
else if ((media>=3)&&(media<=7)) {
    printf("Exame");
    }
else if ((media>=0)&&(media<=3)){
    printf("Reprovado");
    }




}
