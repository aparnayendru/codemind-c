#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum=0,countt=0,y=0;
    scanf("%d",&n);
    int arr[n];
    float avrg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        if(arr[i]==-1)
        {
            continue;
        }
        else
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
        }
        printf("%d %d ",arr[i],count);
    }
}