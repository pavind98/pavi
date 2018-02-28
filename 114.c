#include<stdio.h>
int main()
{
int n,k,a[30],i,count=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if((a[i]%2)==0)
{
count++;
if(count==k)
{
printf("%d th odd number is %d",k,a[i]);
return 0;
}
}
}
}
