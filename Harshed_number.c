#include<stdio.h>
int main()
{
   int sum=0;
   int r,n,temp;
   scanf("%d",&n);
   temp=n;
   while(temp>0)
   {
     r=temp%10;
     sum=sum+r;
     temp=temp/10;
   }
   if(n%sum==0)
    printf("True");
   else
    printf("False");
}