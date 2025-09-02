#include <stdio.h>

int main ()
{
    float Yards;
    float Kilo;

    printf("entrer la distance en kilometres :");
    scanf("%f",&Kilo);
    Yards = Kilo * 1093.61;
    printf("la distance en Yards est : %f", Yards);
    return 0;
}