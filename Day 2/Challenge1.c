#include <stdio.h>

int main ()
{
    int input = 0;

    printf("entrez un nombre : " );
    scanf("%d", &input);
    if(input % 2 == 0)
    printf("le nombre est pair ");
    else
    printf("le nombre est impair ");

    return 0;
}