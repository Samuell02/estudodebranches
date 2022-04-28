#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,n3,p1,p2,p3,mediaponderada;
    printf("Digite a primeira nota :\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota :\n");
    scanf("%f",&n2);
    printf("Digite a terceira nota :\n");
    scanf("%f",&n3);
    p1=2;
    p2=3;
    p3=5;
    mediaponderada=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
     printf ("media ponderada: %.2f\n",mediaponderada);




 if ((mediaponderada>=8)&&(mediaponderada<=10)) {
    printf("Conceito A");
    }
else if ((mediaponderada>=7)&&(mediaponderada<=8)) {
    printf("Conceito B");
    }
else if ((mediaponderada>=6)&&(mediaponderada<=7)){
    printf("Conceito C");
    }
else if ((mediaponderada>=5)&&(mediaponderada<=7)){
    printf("Conceito D");
    }
 if ((mediaponderada>=0)&&(mediaponderada<=5)){
        printf("Conceito E");}




}
