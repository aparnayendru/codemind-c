#include<stdio.h>
int main()
{
    int n,left=2,right=2;
    scanf("%d",&n);
    while(left*2<=n)
    {
        left=left*2;
    }
    right=left*2;
    if(n-left<right-n)
    {
        printf("%d",n-left);
    }
    else if(n-left==right-n)
    {
        printf("%d %d",left,right);
    }
    else
    {
        printf("%d",right-n);
    }
}