#include <stdio.h>

int main ()
{
    float n1,n2,n3;


    printf("entrez le premier nbr  ");
    scanf("%f",&n1);
    printf("entrez le deuxieme numero ");
    scanf("%f", &n2);
    printf("entrez le troisieme numero:");
    scanf("%f", &n3);
    printf("moyenne ponderee est %f",(n1*2 + n2*3 +  n3*5));
    return 0;
}