#include<stdio.h>

int main ()
{
    int R , L , n ;
    float pi = 3.1415  , volume ;
    scanf ("%d%d",&R,&L);
    volume = (4.0f / 3.0f)*pi*R*R*R ;
    n = L / volume ;
    printf ("%d\n",n);
    return 0 ;
}
