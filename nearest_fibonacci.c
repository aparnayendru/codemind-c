#include<stdio.h>
int fib(int);
int fib(int i)
{
    int n1=0,n2=1,n3;
    n3=n1+n2;
    while(n3<i)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    if(n3==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,left=0,right=0,c,d;
    scanf("%d",&n);
    int temp=n;
    for(i=n-1;i>2;i--)
    {
        if(fib(i))
        {
            //printf("%d",i);
            left=i;
            break;
        }
    }
    for(i=n+1;i<=10000;i++)
    {
        if(fib(i))
        {
            right=i;
            break;
        }
    }
    c=temp-left;
    d=right-temp;
    if(c<d)
    {
        printf("%d",left);
    }
    else if(d<c)
    {
        printf("%d",right);
    }
    else
    {
        printf("%d %d",left,right);
    }
}