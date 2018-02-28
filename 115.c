#include<stdio.h>

int main()
{
    int n,k,i,j,temp,a[40];
    printf("enter the values");
    scanf("%d",&n);
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("enter the k values");
    scanf("%d",&k);
    printf("%d",k);
}
    
            
        
    
