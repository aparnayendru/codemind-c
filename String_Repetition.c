#include<stdio.h>
#include<string.h>
int main()
{
    char x[100000];
    long long c=0,k,l,le,n,t;
    scanf("%s",x);
    scanf("%lld",&n);
    le=strlen(x);
    for(long long i=0;i<le;i++)
    {
        if(x[i]=='a')
        {
            c+=1;
        }
    }
    l=n/le;
    k=n%le;
    t=l*c;
    for(long long i=0;i<k;i++)
    {
        if(x[i]=='a')
        {
            t+=1;
        }
    }
    printf("%lld",t);
}