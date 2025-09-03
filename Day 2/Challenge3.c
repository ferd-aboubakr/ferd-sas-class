#include <stdio.h>

int main ()
{
    int a,b = 0;
    printf("entrez un nombre entier :");
    scanf("%d", &a);
    printf("entrez un autre nombre entier :");
    scanf("%d", &b);
    if(a == b)
    printf("les nombres sont identiques le resultat est --> : %d", (a*6));
    else 
    printf("le resultat est --> : %d", (a+b));
    


    return 0;
}