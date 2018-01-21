
#include <iostream>
using namespace std;
 
unsigned countOfMultiples(unsigned n)
{
  
     return (n/3 + n/5 - n/15);
}

int main()
{
   cout << countOfMultiples(6) << endl;
   cout << countOfMultiples(16) << endl;
   return 0;
}
