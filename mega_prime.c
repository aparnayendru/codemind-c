#include<stdio.h>
int main()
{
    int n,i,r,sum=0,count=0,flag=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    {
        while(n>0)
        {
            r=n%10;
            for(i=2;i<r;i++)
            {
                if(r%i==0)
                sum++;
            }
            if(r==1)
            flag++;
            n=n/10;
        }
    }
    if(count==0&&sum==0&&flag!=1)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
    return 0;
}