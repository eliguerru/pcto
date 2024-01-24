#include <stdio.h>
int main () 
{
    int lato1;
    int lato2;
    int lato3; 
    printf ("inserisci la lunghezza del lato1\n");
    scanf ("%d", &lato1);
    printf ("inserisci la lunghezza del lato2\n");
    scanf ("%d", &lato2);
    printf ("inserisci la lunghezza del lato3\n");
    scanf ("%d", &lato3);
 if ( lato1== lato2 && lato2== lato3)
{
   printf("il triangolo è equliatero\n");
}
else if (lato1==lato2 && lato2!=lato3)
{
    printf("il triangolo è isoscele\n");
}
else
{
    printf ("il triangolo è scaleno\n");
}
return (0);
}