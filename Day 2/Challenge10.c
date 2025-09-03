#include <stdio.h>

int main ()
{
    char date[11];
    int month = 0;

    char *mois[] = {"janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet" ,"aout", "septembre", "octobre", "novembre", "decembre"};
    scanf("%s",date);
     month = (date[3] - '0') * 10 + (date[4] - '0');
    printf("%c%c-%s-%c%c%c%c", date[0], date[1],mois[month -1] ,date[6],date[7],date[8],date[9]);
    return 0;
}