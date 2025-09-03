#include <stdio.h>

int main ()
{
    float annee = 0 ;
    printf("entrez une annee :");
    scanf("%f", &annee);
    printf("%0.1f an est : %f en mois\n", annee, (annee *  12));
    printf("%0.1f an est : %f en jours \n",annee, (annee * 365));
    printf("%0.1f an est : %f en heures \n", annee, (annee * 365 * 24) );
    printf("%0.1f an est : %f en minutes\n", annee, (annee * 356 * 24 * 60));
    printf("%0.1f an est : %f en secondes\n", annee, (annee * 356 * 24 * 60* 60));


    return 0;
}