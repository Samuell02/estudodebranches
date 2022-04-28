#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float ang, alt, escada, radiano; 

    printf("Insira a medida do angulo da escada e entao insira a altura da parede na qual esta a escada:\n");
    scanf("%f",&ang);
    scanf("%f",&alt);
    radiano=ang*3.14/180;
    escada=alt/sin(radiano);
    printf("a medida da escada e : %.2f\n",escada);
    system("pause");
    return 0;
}
