#include <stdio.h>

int main ()
{
    float note = 0;

    printf("entrez votre note : ");
    scanf("%f", &note);
    if (note < 10)
    printf("Echec(Recale)");
    else if(note <12 && note >= 10)
    printf("Passable");
    else if(note < 14 && note >= 12)
    printf("Assez Bien");
    else if(note < 16 && note >= 14)
    printf(" Bien");
    else 
    printf("Tres Bien");
    return 0;
}