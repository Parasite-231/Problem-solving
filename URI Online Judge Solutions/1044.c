#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d%d",&n,&a);
    if(n%a==0 || a%n==0){
        printf("Sao Multiplos\n");
        }
    else {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}

