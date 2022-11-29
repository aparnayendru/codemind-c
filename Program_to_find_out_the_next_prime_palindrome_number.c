#include<stdio.h>
//int prime(int);
int prime(int i)
{
    int j;
    if(i<2)
    {
        return 0;
    }
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int pal(int i)
{
    int temp=i,sum=0,r;
    while(i>0)
    {
        r=i%10;
        sum=sum*10+r;
        i=i/10;
    }
    if(sum==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,left=0,right=0,c=0,d=0;
    scanf("%d",&n);
    while(1)
    {
        n=n+1;
        if(prime(n) && pal(n))
        {
            printf("%d",n);
            break;
        }
    }
    
}