#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

   
    float basemaior,basemenor,altura,area; 

    printf("Insira a base maior, base menor, e entao a altura:\n");
    scanf("%f",&basemaior);
    scanf("%f",&basemenor);
    scanf("%f",&altura);
    area=((basemaior+basemenor)*altura)/2;
    printf("a area do trapezio e  : %.2f\n",area);
    system("pause");
    return 0;
}
