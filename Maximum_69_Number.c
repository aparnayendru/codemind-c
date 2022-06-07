#include<stdio.h>
int main()
{
    int n,i,k=0,r;
    scanf("%d",&n);
    int arr[100];
    while(n>0)
    {
        r=n%10;
        arr[k]=r;
        k++;
        n=n/10;
    }
    for(i=k-1;i>=0;i--)
    {
        if(arr[i]==6)
        {
            arr[i]=9;
            break;
        }
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}