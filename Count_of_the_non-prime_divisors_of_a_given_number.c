#include<stdio.h>
int main()
{
    int i,j,n,count=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                count++;
            }
        }
        if(count!=2&&count>0)
        {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
    
}