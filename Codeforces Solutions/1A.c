#include<stdio.h>
int main()
{
    long long int m,n,a,pattern_1,pattern_2,x;
    scanf("%lld %lld %lld",&m,&n,&a);
    pattern_1=(m+(a-1))/a;
    pattern_2=(n+(a-1))/a;
    x=pattern_1*pattern_2;
    printf("%lld",x);
    return 0;

}
