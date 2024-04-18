//tedad entekhabi adad begir reverse chap kon

#include <iostream>

int main() 
{
    int amount;

    std::cout << "how many numbers do you want to enter? ";
    std::cin >> amount;

    std::cout << std::endl;
    
    int numbers[amount];

    for (auto i{0}; i < amount; ++i) {
        std::cout << "number " << (i+1) << ": ";
        std::cin >> numbers[i];
    }

    std::cout << std::endl;
    
    std::cout << "numbers in reverse order: ";

    for (auto i{amount-1}; i >= 0; --i) {
        std::cout << numbers[i] << ". ";
    }

    std::cout << std::endl;

    return 0;
}
