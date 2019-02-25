#include <stdio.h>
#include <stdlib.h>

int main()
{
    double resultat =0,nombre1=0,nombre2=0;

    printf("entrer le nombre1 \n");
    scanf("%lf",&nombre1);

    printf("entrer le nombre2 \n");
    scanf("%lf",&nombre2);

    resultat = nombre1/nombre2;
    printf("%f / %f = %f\n",nombre1,nombre2,resultat);

    return 0;
}
