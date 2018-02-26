#include <stdio.h>

int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    while(i%2==0)
    {
        i=i/2;
    }
        printf("%d",i);
    return 0;
}
