#include <stdio.h>

int main()
{
    int i = 0;
    char tab[100];
    printf("entrez un phrase : ");
    fgets(tab,100,stdin);
    while(tab[i] != '\0')
    i++;
    printf("la longeur de la chaine de characteres est  : %d", i);
    return 0;
}