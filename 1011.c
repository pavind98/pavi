#include <stdio.h>

int main()
{
    int i,n,d,count=0,a;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the last character");
    scanf("%d",&a);
    for( i=0;i<=a;i++)
    {

    while(n!=0)

    {
        d=n%10;
        n=n/2;
        count=count+d;
    }
        printf("%d",count);
    }
    return 0;
}
