#include<stdio.h>
int main()
{
    int n,i,elem,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&elem);
    for(i=0;i<n;i++)
    {
        if(arr[i]==elem)
        count++;

    }
    if(count>0)
    printf("True");
    else
    printf("False");
    return 0;
}