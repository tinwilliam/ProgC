#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int age =0;
    printf("entrer votre age\n");
    scanf("%d",&age);

    if (age>=18 && age<=110)
    {
        printf("vous etes majeur !! ");
    }

    else if ( age<0 || age>110)
    {
        printf("Impossible !!! Ceci n'est pas un age physique");
    }

    else if (age>=5)
    {
        printf("T'es un bout de chou");
    }

    else
    {
        printf("T'es un bebe");
    }
    return 0;
}
