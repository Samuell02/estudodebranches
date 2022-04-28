#include<stdio.h>
#include<stdlib.h>

int main ( )

{

float n1, n2, n3, media,p1, p2, p3, total;


printf("insira a primeira nota\n");

scanf("%f", &n1);

printf("insira o peso da primeira nota\n");

scanf("%f", &p1);

printf("insira a segunda nota\n");

scanf("%f", &n2);

printf("insira peso da segunda nota\n");

scanf("%f", &p2);

printf("insira a terceira nota\n");

scanf("%f", &n3);

printf("insira o peso da terceira nota\n");

scanf("%f", &p3);

total =(p1+p2+p3);

media=((n1*p1)+(n2*p2)+(n3*p3))/total;

printf("media: %.1f", media);

}
