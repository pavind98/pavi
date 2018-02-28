#include <stdio.h>
int main()
{
	int a[10],i,j,n,b,t,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the elements are:\n");
	scanf("%d",&b);
	printf("list of elements:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
    if((a[i]%2)==0)
	 {
	        count++;
	        if(count==b)
	        {
	            printf("%d the odd number is %d",b,a[i]);
	        }
	    
	 }
	}
	
	}
