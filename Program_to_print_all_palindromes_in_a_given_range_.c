#include<stdio.h>
int main()
{
    int start,end,i,r,sum=0;
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++)
    {
        sum=0;
        int temp=i;
        while(temp)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        if(i==sum)
        {
            printf("%d ",i);
        }
    }
    return 0;
}