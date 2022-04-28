#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{

    float n1,n2,media1,media2,mediaponderada; 

    printf("Insira o valor do produto:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    media1=(n1*2)+(n2*3);
    media2=2+3;
    mediaponderada=media1/media2;
    printf("a media ponderada e : %.2f\n",mediaponderada);
    system("pause");
    return 0;
}
