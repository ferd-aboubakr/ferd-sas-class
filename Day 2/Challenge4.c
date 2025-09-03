#include <stdio.h>

int main ()
{
    int delta,b,a,c = 0;

    printf("soit une equation du second degre de la forme : ax^2 + bx + c = 0 . entrez le premier numbre a : ");
    scanf("%d", &a);
    printf("entrez le dexieme nombre b :");
    scanf("%d", &b);
    printf("entrez le troisieme nombre c :");
    scanf("%d", &c);
    delta = b*b - 4*a*c;
    if (delta > 0)
    printf("on a deux solution distinctes : %d et -%d :", delta, delta);
    else if (delta == 0)
    printf("on a une solution double %d :", delta );
    else 
    printf("Pas de solution ");

    return 0;
}