#include <stdio.h>

int main()
{
    float ms = 0;
    float kmh = 0;

    printf("entrer la vitesse en km/h : ");
    scanf("%f" ,&kmh);
    ms = kmh * 0.27778;
    printf("la vitesse en m/s est : %f", ms);

    return 0;


}