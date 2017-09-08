#include<stdio.h>
#define bool int

bool isPowerOfTwo (int x)
{
 
  return x && (!(x&(x-1)));
}
 
int main()
{
  isPowerOfTwo(31)? printf("Yes\n"): printf("No\n");
  isPowerOfTwo(1)? printf("Yes\n"): printf("No\n");
  return 0;
}
