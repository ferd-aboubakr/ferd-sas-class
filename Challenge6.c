#include <stdio.h>

int main()
{
    float a,b,result;

    printf("entrez un nombre reel :");
    scanf("%f",&a);
    printf("entrez un autre nombre :");
    scanf("%f",&b);

    printf("addition : %f soustraction : %f multiplication %f division %f ", (a+b),(a-b),(a*b),(a/b));
    

    return 0;
}