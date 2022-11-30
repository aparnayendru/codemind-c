#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        char str[10000];
        scanf("%s",str);
        int c=0;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                c++;
            }
            else
            {
                c=0;
                printf("False
");
                break;
            }
        }
        if(c>0)
        {
            printf("True
");
        }
        
    }
}