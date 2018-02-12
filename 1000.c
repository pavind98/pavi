#include<stdio.h>
void main()
{
    int a=222,r,s=1;
    do
    {
        r=a%10;
        s=s*r;
        a=a/10;
    }while(a!=0);
    printf("%d",s);
}
