#include <stdio.h>

int main ()
{
    char tab[100];
    char tab2[100];
    int i = 0;
    int j = 0;
    printf("entrez une phrase contenant des espaces :");
    fgets(tab,100,stdin);

    while(tab[i] != '\0')
    {
        if(tab[i] == ' ')
        {
        i++;
        }
        else
        {
        tab2[j] = tab[i];
        i++;
        j++;
        }
    }
    tab2[j] = '\0';
    printf("%s",tab2);

    return 0 ;
}