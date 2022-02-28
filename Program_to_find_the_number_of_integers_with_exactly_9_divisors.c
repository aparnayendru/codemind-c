#include<stdio.h>
int main()
{
    int i,j,n,count=0,total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==9)
        {
        printf("%d ",i);
        total++;
        }
    }
    printf("
Total=%d",total);
    return 0;
}