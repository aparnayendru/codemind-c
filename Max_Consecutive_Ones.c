#include<stdio.h>
int main()
{
    int i,n,j,count=1,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        if(arr[i]==1)
        {
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
            }
            else
            {
                break;
            }
        }
        /*printf("%d",count);
        printf("
");*/
        if(count>max)
        {
            max=count;
        }
        }
    }
    printf("%d",max);
}