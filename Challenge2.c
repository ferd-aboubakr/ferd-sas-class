#include <stdio.h>

int main()
{
    float C = 0;
    float K = 0;

    printf("entrer la temperature en Celcius :");
    scanf("%f", &C);
    K = C + 237.15;
    printf("La temperature en Klevin est : %f", K);
 return 0;
}