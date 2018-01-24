#include <iostream>
#include <string>
#include <algorithm>
 
int main()
{
    std::string s;
    char c;
 
    std::cout << "Enter the string : ";
    std::cin >> s;
    std::cout << "\nEnter the character : ";
    std::cin >> c;
    /* Removing character c from s */
    s.erase(std::remove(s.begin(), s.end(), c), s.end());
    std::cout << "\nString after removing the character "
              << c << " : " << s;
}
