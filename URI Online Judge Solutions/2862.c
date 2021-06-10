#include<stdio.h>
int main ()
{
    int i , n , N ;
    scanf ("%d" ,&n) ;
    for( i = 1 ; i <= n ; i++){
        scanf("%d" ,&N) ;
        if ( N <= 8000)
            printf("Inseto!\n") ;
        else printf("Mais de 8000!\n") ;

    }
    return 0 ;
}


