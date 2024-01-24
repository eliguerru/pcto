#include <stdio.h>
int main ()
{
    int a = 3;
    int b = 6;
    int c = 9;
    int s1 = a-b;
    int s2 = b-c;
    if (s1==s2)
    {
        printf("sono in progressione aritmentica");
     }
     else
     {
        printf("non sono in progressione aritmentica");
     }
     return (0);
}