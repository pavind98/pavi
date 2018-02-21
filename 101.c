#include<stdio.h>
void main()
{
int a[10],n,i=0,l=0;
printf("enter the string");
scanf("%s",&a);
printf("enter N value");
scanf("%d",&n);
while(a[i]!='\0')
{
l++;
}
for(i=--l;n>0;i++,n--)
{
printf("%d",a[i]);
}
}
