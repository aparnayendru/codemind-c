#include<stdio.h>
int main()
{
    int n,count,i,k;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=arr[i];
        count=0;
        if(k==0)
        {
            count++;
        }
        else
        {
            while(k!=0)
            {
                count+=1;
                k=k/10;
                
            }
        }
        printf("%d ",count);
    }
}