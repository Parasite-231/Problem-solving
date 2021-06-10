#include<stdio.h>
#include<stdio.h>

int main ()
{
    int N , i , n ;
    char a[100];
    scanf("%d",&N);
    for ( i = 0 ; i < N ; i++){
        scanf("%s%d",a,&n);
        if (!strcmp(a, "Thor"))
            printf("Y\n");
        else printf("N\n");

    }
    return 0 ;
}

