#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        temp=arr[i];
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        if(arr[i]==sum)
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}