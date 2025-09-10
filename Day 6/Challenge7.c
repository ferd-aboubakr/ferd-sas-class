#include <stdio.h>

int main()
{
    int i = 0;
    char tab[100];
    printf("entrez une phrase : ");
    fgets(tab,100,stdin);
    while(tab[i] != '\0')
    {
        if(tab[i] >= 97 && tab[i] <= 122)
        {
        tab[i] = tab[i] - 'a' + 'A';
        i++;
        }
        else
        i++;

    }
    printf("la phrase mise en majuscules : %s", tab);
    return 0;
}