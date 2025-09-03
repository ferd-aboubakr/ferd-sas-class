#include <stdio.h>

int main ()
{
     char c;
     printf("entrez un charactere : ");
     scanf("%c", &c);
     switch(c)  {
        case ('a' ):
        printf("c'est une voyelle : %c", 'a');
        break;
        case ('e'):
        printf("c'est une voyelle : %c , 'e'");
        break;
        case ('i'):
        printf("c'est une voyelle : %c , 'i'");
        break;
        case ('o'):
        printf("c'est une voyelle : %c , 'o'");
        break;
        case ('u'):
        printf("c'est une voyelle : %c , 'u'");
        break;
        case ('A' ):
        printf("c'est une voyelle : %c", 'A');
        break;
        case ('E'):
        printf("c'est une voyelle : %c , 'E'");
        break;
        case ('I'):
        printf("c'est une voyelle : %c , 'I'");
        break;
        case ('O'):
        printf("c'est une voyelle : %c , 'O'");
        break;
        case ('U'):
        printf("c'est une voyelle : %c , 'U'");
        break;        
        default :
        printf("pas de voyelles");
        break;
     }

    return 0;
}