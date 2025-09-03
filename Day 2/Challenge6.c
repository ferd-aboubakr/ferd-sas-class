#include <stdio.h>

int main ()
{
    int a = 0;

    printf("entrez un nombre :");
    scanf("%d", &a);
    if(a == 0)
    printf("le nombre est NUL\n");
    else if (a < 0)
    printf("le nombre est Negatif\n");
    else 
    printf("le numbre est positif\n");
    return 0;
}