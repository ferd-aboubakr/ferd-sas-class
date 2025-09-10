#include <stdio.h>
#include <string.h>

int main()
{
    char tab1[100];
    char tab2[100];
    printf("entrez la premiere chaine :");
    fgets(tab1,100,stdin);
    int len = strlen(tab1);
    if (len > 0 && tab1[len - 1] == '\n') {
        tab1[len - 1] = '\0';
    }
    printf("entrez la deuxieme chaine :");
    fgets(tab2,100,stdin);
    len = strlen(tab2);
    if (len > 0 && tab2[len - 1] == '\n') {
        tab2[len - 1] = '\0';
    }
    if(strcmp(tab1,tab2) == 0)
    printf("les deux chaines sont identiques !");
    else
    printf("les deux chaines ne sont pas identiques !");
    return 0;
}