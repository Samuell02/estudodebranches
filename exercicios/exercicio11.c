#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main () {
int  num, quad, cubo;

float raizQ, raizC;

printf("Insira um numero: ");
scanf(%d*c, &num)

quad = pow(num, 2);
cubo = pow(num, 3);

raizQ = sqrt(num);
raizC = cbrt(num);

printf("O numero %d ao quadrado eh : %d/n", num,quad);
printf("O numero %d  ao cubo eh : %d/n", num, cubo);
printf("A raiz quadrada de %d  eh : %.2f/n", num, raizQ);
printf("A raiz cubica  de  %d eh : %.2f/n", num, raizC);

return 0;

}
