#include<stdio.h>
int main()
{
    int n,i,k,count=0,t=0,m;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        m=arr[i];
        count=0;
        if(m==0)
        {
            count++;
        }
        else
        {
            while(m!=0)
            {
                m=m/10;
                count++;
            }
        }
        if(count==k)
        {
            t++;
        }
    }
    printf("%d",t);
}