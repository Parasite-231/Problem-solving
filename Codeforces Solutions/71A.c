#include <stdio.h>
#include<string.h>
int main()
{
    int n, len , i = 0;
    char in[1000];

    scanf("%d",&n);

    while( i <= n)
    {
        gets( in );
        len = strlen(in);
        if(len <= 10)
            printf("%s\n", in);
        else
            printf("%c%d%c\n", in[0], len-2,  in[len-1]);

        i ++;
    }

    return 0;
}
