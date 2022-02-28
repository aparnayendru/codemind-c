#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,sum=0,c=0,r;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        c++;
    }
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        sum=sum+pow(r,c);
        temp=temp/10;
        c--;
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
    return 0;
}