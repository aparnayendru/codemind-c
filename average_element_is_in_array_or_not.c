#include<stdio.h>
int main()
{
    int n,i,elem,sum=0,count=0,avrg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&elem);
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avrg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avrg)
        count++;
    }
    if(count>0)
    printf("True");
    else
    printf("False");
    return 0;
}