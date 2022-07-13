#include<stdio.h>
int main()
{
    int n,a[100],c=0,sum=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
            }
        }
        if(c==0)
        {
            if(a[i]%2!=0)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
    return 0;
}