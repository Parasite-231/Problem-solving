#include<stdio.h>
int main()
{
    int x,y,m,d;
    scanf("%d",&x);
    y=x/365;
    m=(x-y*365)/30;
    d=(x-y*365)-m*30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
  return 0;

}

