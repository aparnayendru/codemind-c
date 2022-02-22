#include<stdio.h>
int main()
{
    int n,i,n1,n2,n3;
    scanf("%d",&n);
    if(n==0||n==1)
    printf("True");
    else
    {
        n1=0;
        n2=1;
        n3=n1+n2;
        while(n3<n)
        {
            n1=n2;
            n2=n3;
            n3=n1+n2;
        }
        if(n3==n)
        printf("True");
        else
        printf("False");
    }
    return 0;
}