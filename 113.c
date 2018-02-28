#include <stdio.h>

int main()
{
   int n,k,a[40],count=0,i;
   printf("enter the value");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      
    scanf("%d",&a[i]);
  }
  printf("Enter k value");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(a[i]==k)
    {
      count++;
    }
  }
  printf("%d",count);

   }


