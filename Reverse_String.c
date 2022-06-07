#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,end,start,len;
    scanf("%[^
]",str);
    len=strlen(str);
    end=len-1;
    for(i=len-1;i>=0;i--)
    {
        if(str[i]==' '||i==0)
        {
            if(i==0)
            {
                start=0;
            }
            else
            {
                start=i+1;
            }
            for(j=start;j<=end;j++)
            {
                printf("%c",str[j]);
            }
            end=i-1;
            printf(" ");
        }
    }
    return 0;
}