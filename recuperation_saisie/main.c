#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age =0;
    double poids=0; //initialisation des variables

    printf("Veuillez entrer votre age \n"); // texte a l'utilisateur
    scanf("%d",&age); //saisie à l'écran

    printf("Veuillez entrer votre poids \n");
    scanf("%lf",&poids);
    printf("Aaah vous avez donc %d ans et pesez %f kgs \n\n",age,poids);

    return 0;
}
