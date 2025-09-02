#include <stdio.h>
#include <math.h>

int main()
{
    float n1,n2,n3;
    printf("entrez premier numero :");
    scanf("%f",&n1);
     printf("entrez deuxieme numero:");
    scanf("%f",&n2);
     printf("entrez troisieme numero :");
    scanf("%f",&n3);
    printf("la moyenne geometrique :%f",pow((n1*n2*n3),1/3));
    return 0;
}