//adad begir moraba va mokaabo namyesh bede

#include <iostream>
#include <cmath>

int main() 
{
    int number;

    std::cout << "enter a number: ";
    std::cin >> number;
    
    std::cout << std::endl;

    std::cout << number << "^2 = " << pow(number, 2) << std::endl; 
    std::cout << number << "^3 = " << pow(number, 3) << std::endl;
    return 0;
}
