#include<iostream>
using namespace std ;
main ()

{
    long int n , m , c , count1 = 0 , count2 = 0 , i ;
    cin >> n ;
    for( i = 1 ; i <= n ; i++)
    {
        cin >> m >> c ;
        if ( m > c )
            count1++ ;
        else if ( c > m)
            count2 ++ ;
    }
    if ( count1 == count2 )
        cout << "Friendship is magic!^^" <<endl ;
    if ( count1 > count2 )
        cout << "Mishka" <<endl ;
     if ( count1 < count2 )
        cout<<"Chris"<<endl ;

}
