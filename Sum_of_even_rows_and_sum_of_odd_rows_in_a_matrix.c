#include<stdio.h>
int main()
{
    int n,m,i,j,even=0,odd=0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
            {
                even=even+arr[i][j];
            }
            else
            {
                odd=odd+arr[i][j];
            }
        }
    }
    printf("%d %d",even,odd);
    return 0;
}