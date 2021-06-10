#include<stdio.h>
#include<math.h>
int main()
{
    int code_1,code_2,number_1,number_2;
    float price_1,price_2,total;
    scanf("%d %d %f",&code_1,&number_1,&price_1);
    scanf("%d %d %f",&code_2,&number_2,&price_2);
    total=(number_1*price_1)+(number_2*price_2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}

