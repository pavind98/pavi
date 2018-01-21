#include <iostream>

using namespace std;

int main () 
{

    int values[20]; 
    int small, big;
    big = small = values[0]; 

    for (int i = 0; i < 20; i++) 
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
    }

    for (int i = 0; i < 20; i++)
    {
        if(values[i] > big) 
        {
            big = values[i];
        }
    }

    for (int i = 0; i < 20; i++)   {
        if (values[i] < small) 
        {
            small = values[i];
        }
    }

    cout << "The biggest number is " << big << endl;
    cout << "The smallest number is " << small << endl; 
}
