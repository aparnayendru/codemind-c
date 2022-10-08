#include<stdio.h>
int main()
{
    long int w,l,h,n;
    scanf("%ld",&l);
    scanf("%ld",&n);
    while(n>0)
    {
        scanf("%ld %ld",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w==h)
        {
            printf("ACCEPTED
");
        }
        else if(w==h && h==l)
        {
            printf("ACCEPTED
");
        }
        else if(w>l || h>l)
        {
            printf("CROP IT
");
        }
        n--;
    }
    return 0;
}