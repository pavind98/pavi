#include<stdio.h>
void main()
{
int n,i,count=0;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(n==0)
{
printf("it is not  a composite number");
}
else
{
printf("it is  a composite number");
}
}
