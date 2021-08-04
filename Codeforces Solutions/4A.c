
#include<stdio.h>
int main()
{
    int w,x,y;
    scanf("%d",&w);
    if(w==2)
    {
        printf("no");
        return 0;
    }

            x=w/2;
            if(x%2!=0){x++;}
            y=w-x;
            if(y%2==0)
            {
                printf("yes");
            }
            else
            {
                printf("no");
            }

        return 0;

}
