#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,i;
    a=0;
    b=0;
    printf("Ahoj Honziku \n");
    printf("dam ti par matematickych prikladu \n");

    for (i=0; i<10; i++)
        {
    printf("kolik je %d + %d ?  \n", a,b);
    scanf(" %d",&c );
    d= a+b;

    if (c == d ) printf(" spravne\n ") ;
    a=a+2;
    b=b+4;
    if ( c != d ) printf(" spatne\n");

    }

    return 0;
}
