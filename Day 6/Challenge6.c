#include <stdio.h>
#include <string.h>

int main()
{
    char tab[100];
    char c;
    int i = 0;
    int count = 0;
    printf("entrez une chaine : ");
    fgets(tab,100,stdin);
    printf("entrez le charactere a trouver : ");
    scanf("%c", &c);

    while(tab[i] != '\0')
    {
        if(c == tab[i])
        {
        count++;
        }
        i++;
    }
    printf("le character %c se repete %d fois :" ,c,count);
    return 0;
}