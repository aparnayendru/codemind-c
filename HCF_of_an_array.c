#include<stdio.h>
int main()
{
    int n,i,j,max=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=max;i>=1;i--)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
        
    }
    return 0;
}