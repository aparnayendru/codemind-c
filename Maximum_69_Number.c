#include<stdio.h>
int main()
{
    int a[100],i,k=0,r,n;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[k]=r;
        k++;
        n=n/10;
    }
    for(i=k-1;i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}