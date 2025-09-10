#include <stdio.h>

int main()
{
    char tab[100];
    printf("entrez un phrase : ");
    fgets(tab,100,stdin);
    printf("votre phrase est : %s",tab);
    return 0;
}