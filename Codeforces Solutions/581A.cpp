#include<iostream>
using namespace std ;
main ()
{
    int a , b , d ;
    cin >> a >> b ;
    if ( a < b && a != b  )
    {
        d = ( b -a) / 2 ;
        cout<<""<<a<<" "<<d<<endl ;
    }
    else if ( a > b  && a != b )
    {
        d = ( a - b )/ 2 ;
        cout<<""<<b<<" "<<d<<endl ;
    }
    else if ( a == b )
    {
        cout<<""<<a<<" 0"<<endl ;
    }
}

