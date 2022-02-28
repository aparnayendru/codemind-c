#include<stdio.h>
int main()
{
    int n,r,sum=0,prod=1,sub;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        prod=prod*r;
        sum=sum+r;
        n=n/10;
    }
    sub=(prod-sum);
    printf("%d",sub);
    return 0;
}