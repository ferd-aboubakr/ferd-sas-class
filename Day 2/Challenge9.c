#include <stdio.h>

int main ()
{
    char c ;
    printf("entrez un charactere : ");
    scanf("%c", &c);
    if (c <= 90 && c >=65)
    printf("c'est une lettre majuscule.");
    else if (c <= 122 && c >= 97)
    printf("c'est une lettre minuscule.");
    else 
    printf("ce n'est pas une lettre alphabetique .");

    return 0;
}