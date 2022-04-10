#include<stdio.h>
int main()
{
    int n,r,i,j,k=0,flag=0,temp;
    scanf("%d",&n);
    int arr[n];
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        arr[k]=r;
        temp=temp/10;
        k++;
        
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    flag++;
                }
            }
        }
    }
    if(flag==0)
    {
       printf("Unique Number"); 
    }
    else
    {
        printf("Not Unique Number");
    }
    return 0;
}