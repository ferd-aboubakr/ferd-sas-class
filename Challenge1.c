#include <stdio.h>

int main ()
{
    char nom[50];
    char prenom[50];
    int  age;
    char sexe[20];
    char mail[50];

    printf("enter your name: " );
    scanf("%s", nom);
    printf("enter your last name : " );
    scanf("%s", prenom);
    printf("enter your age " );
    scanf("%d", &age);
    printf("enter your sexe : " );
    scanf("%s", sexe);
    printf("enter your emai adresse : " );
    scanf("%s", mail);


    printf("*******************************              **************************              *******************************\n");

    printf("your name is %s \n", prenom);
    printf("your last name is %s \n", nom);
    printf("your age is %d \n", age);
    printf("your sexe is : %s \n", sexe);         
    printf("your email adresse is : %s \n", mail);
    return 0;
}