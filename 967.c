#include <stdio.h>

int main(void) {
	int n,a,p;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		p=p*a;
		n=n/10;
	}
	printf("%d",p);
	return 0;
}
