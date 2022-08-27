#include<stdio.h>
#include<stdlib.h>
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
    int n,a,b,k,t,i,p,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d %d",&n,&a,&b,&k);
        p=gcd(a,b);
        count=(n/a)+(n/b)-2*(n/((a*b)/(p)));
        if(abs(count)>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
    return 0;
}