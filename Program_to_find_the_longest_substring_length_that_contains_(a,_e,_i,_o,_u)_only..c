#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int i,max=0,c=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=0;
        }
    }
    printf("%d",max);
}