#include <stdio.h>
#include<strings.h>

int main ()
{
    char tab[100];
    char word[20];
    char *ret;
    printf("entrez une phrase :");
    fgets(tab,100,stdin);
    printf("entrez un mot : ");
    fgets(word,20,stdin);
    int len = strlen(tab);
    if (len > 0 && tab[len - 1] == '\n') {
        tab[len - 1] = '\0';
    }

    len = strlen(word);
    if (len > 0 && word[len - 1] == '\n') {
        word[len - 1] = '\0';
    }
     ret = strstr(tab,word);
    if( ret != NULL)
    {
    printf("le mot %s existe dans la phrase !", word);
    }
    else
    printf("le mot %s n'existe pas dans la phrase !",word);



    return 0;
}