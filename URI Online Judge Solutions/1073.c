#include<stdio.h>
int main ()
{
   long int i , m , j = 2 , N ;
   scanf ("%ld",&N);
   for ( i = 2 ; i <= N ; i+= 2 ){
    m = i * i ;
   printf("%ld^%ld = %ld\n",i,j,m);

   }
   return 0 ;

}
