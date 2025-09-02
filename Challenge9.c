#include <stdio.h>
#include<math.h>

int main()
{
    float point1[3],point2[3];
    printf("enter first point coordinate");
    scanf("%f",&point1[0]);
     printf("enter second point coordinnate ");
    scanf("%f",&point1[1]);
     printf("enter first point coordinate");
    scanf("%f",&point1[2]);
     printf("enter second point coordinate ");
    scanf("%f",&point2[0]);
     printf("enter second point coordinate ");
    scanf("%f",&point2[1]);
     printf("enter second point coordinate ");
    scanf("%f",&point2[2]);
    printf("la distance euclidienne est : %f ",sqrt(pow(point1[0]-point2[0], 2) +
pow(point1[1]-point2[1], 2) + pow(point1[2]-point2[2], 2)));
    return 0;
}