#include<stdio.h>
int main()
{
    int h,ss,m,s;
    scanf("%d",&ss);
    h=(ss*1)/3600;
    ss=ss-3600*h;
    m=ss/60;
    s=ss-60*m;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}

