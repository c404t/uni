//get a 5digit number, show digits with 3 spaces in between them

#include <iostream>
#include <iomanip>
#include <string>

int main() 
{
    std::string number;

    std::cout << "enter a 5 digit number: ";
    std::cin >> number;
    
    for (int i {0}; i < 5; ++i) {
    std::cout << std::setw(4) << number[i];
    }

    std::cout << std::endl;

    return 0;
}
