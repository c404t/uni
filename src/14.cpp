//ye adad begir makoos ta 1 ro chap kon

#include <iostream>

int main()
{
    int number;

    std::cout << "enter a number: ";
    std::cin >> number;

    if(number == 69) {
        std::cout << "you cant choose that number, try somen else bro" << std::endl;
    } else {
        std::cout << "ok the reverse order is: ";
    
        for(int i {number}; i > 0; --i) {
            if (i == 1) { 
                std::cout << i;
            } else {
            std::cout << i << ", ";
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
