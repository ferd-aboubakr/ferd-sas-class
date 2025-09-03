#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int r = (rand() % (7) )+ 1 ;
    switch(r)
    {
        
        case (1):
        printf("le jour est lundi");
        break;
        case (2):
        printf("le jour est mardi");
        break;
        case (3):
        printf("le jour est mercredi");
        break;
        case (4):
        printf("le jour est jeudi");
        break;
        case (5):
        printf("le jour est vendredi");
        break;
        case (6):
        printf("le jour est samedi");
        break;
        case (7):
        printf("le jour est dimanche");
        break;
        default :
        printf("aurevoir");
        break;

    }
    return 0;
}