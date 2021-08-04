#include<stdio.h>
int main()
{
    char name[32];
    double a,b,t;

    gets(name);
    scanf("%lf %lf",&a,&b);
    t=a+(b*15)/100;
    printf("TOTAL = R$ %.2f\n",t);
    return 0;

}
