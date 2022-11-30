#include<stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char x[20];
        scanf("%s",x);
        if(x[1]=='+')
        {
            c+=1;
        }
        else
        {
            c-=1;
        }
    }
    printf("%d",c);
}