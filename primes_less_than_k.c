#include<stdio.h>
int main()
{
    int n,i,countt=0,sum=0,k,count=0,j,m;
    scanf("%d ",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        count=0;
        k=arr[i];
        for(j=1;j<=k;j++)
        {
            if(k%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            if(arr[i]<=m)
            {
                countt++;
            }
        }
    }
    printf("%d",countt);
}