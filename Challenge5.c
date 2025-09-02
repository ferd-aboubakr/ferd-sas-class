#include <stdio.h>

int main ()
{
    int temp = 0;

    printf("entrez la temperature de l'eau :");
    scanf("%d", &temp);
    if(temp < 0)
    printf("Solide(glace)");
    else if (temp < 100 && temp >= 0)
    printf("Liquide(eau)");
    else 
    printf("Gaz(vapeur)");
    return 0;
}