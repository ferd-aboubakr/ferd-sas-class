#include <stdio.h>

int main ()
{
    int i = 0;
    int j =0;

    char tab1[100],tab2[100],res[200];
    printf("entrez la premiere chaine : ");
    fgets(tab1,100,stdin);
    printf("entrez la deuxieme chaine : ");
    fgets(tab2,100,stdin);

    while (tab1[i] != '\0')
    {
    res[i] = tab1[i];
    i++;
    }
    j = i-1;
    i = 0;
    while (tab2[i] != '\0')
    {
    res[j] = tab2[i];
    i++;
    j++;
    }
    printf("%s",res);
    return 0;
}