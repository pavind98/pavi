
#include<iostream.h>
#include<conio.h>

void lcm(int,int);

void main()
{
    int a,b;
    clrscr();
    cout<<"Enter two numbers: ";
    cin>>a;
    cin>>b;
    lcm(a,b);
    getch();
  //  return 0;
}

void lcm(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
	if(m < n)
	{
	m=m+a;
	}
	else
	{
	    n=n+b;
	    }
    }

    cout<<"\nL.C.M of "<<a<<" and "<<b<<" is "<<m;
}
