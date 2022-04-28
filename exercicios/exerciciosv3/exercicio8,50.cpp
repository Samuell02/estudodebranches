#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

   
    float pesoG,pesoK; 

    printf("Insira o seu peso  em gramas:\n");
    scanf("%f",&pesoK);
    pesoG =pesoK*1000;
    printf("a  peso da pessoa em gramas e  : %.2f\n",pesoG);
    system("pause");
    return 0;
}
