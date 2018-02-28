#include<stdio.h>

int main()
{
	 int k,m[5],i,count=1;
	 printf("get the numbers\n");
	 for(i=0;i<5;i++)
	 {
	 scanf("%d",&m[i]);
	}
	printf("enter the number to verify\n");
	scanf("%d ",&k);
	for(i=0;i<5;i++)
		{
	
		if(k==m[i])
		{
	count++;
		}
	}
	if(count>1)
	
		printf("no is present");
		
	
	else
		
			printf("no is not present");
		
	return 0;
}
 
© 2018 GitHub, Inc.
