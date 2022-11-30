#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[10000];
    char b[10000];
    scanf("%s",a);
    scanf("%s",b);
    long long x=atoi(a);
    long long y=atoi(b);
    long long z=x*y;
    printf("%lld",z);
}