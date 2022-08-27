#include<stdio.h>
int gcd(int a,int b)
{
    int i,gcdd=0;
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcdd=i;
        }
    }
    return gcdd;
}
int main()
{
    int lcm,gcdd,i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    lcm=arr[0];
    gcdd=arr[0];
    for(i=1;i<n;i++)
    {
        gcdd=gcd(arr[i],lcm);
        lcm=(lcm*arr[i])/gcdd;
    }
    printf("%d",lcm);
}