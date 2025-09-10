#include <stdio.h>


int main ()
{
     int start = 0;
    int end = 0;
    char str[512];
   printf("entrez votre chaine de characteres a inverser :");
   fgets(str,500,stdin);
   int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
   char temp;
   
    while (str[end] != '\0')
    {
    end++;
    }
    end--;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
   printf("%s", str);
 return 0;
}