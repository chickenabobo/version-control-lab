#include <iostream>

int main() 
{
    std::cout << "Enter two numbers:" << std::endl;
    int n1; 
    int n2;
    std::cin >> n1 >> n2;
    std::cout << "The sum of " << n1 << " and " << n2
    << " is " << n1 + n2 << std::endl;
    return 0;
}