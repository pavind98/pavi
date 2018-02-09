#include<stdio.h>

int main()
{
    char[10];
    int i,j,b,temp;
    scanf("%d",a);
    
    for(i=0;i<b;i++)
    {
        for(j=i;j<b;j++)
        {   if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%c",a[i]);
    }
}
