#include <stdio.h>

int main()
{
    int i = 0;
    char tab[100];
    printf("entrez une phrase : ");
    fgets(tab,100,stdin);
    while(tab[i] != '\0')
    {
        if(tab[i] >= 65 && tab[i] <= 90)
        {
        tab[i] = tab[i] - 'A' + 'a';
        i++;
        }
        else
        i++;

    }
    printf("la phrase mise en minuscules : %s", tab);
    return 0;
}