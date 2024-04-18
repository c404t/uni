//10 adad begir az kochak be bozorg moratab kon

#include <iostream>
#include <array>
#include <algorithm>

int main() 
{
    std::array<int, 10> numbers;
    int counter {1};

    std::cout << "10 numbers to be sorted" << std::endl;
    for (auto& i : numbers) {
        std::cout << "enter number " << counter << " : ";
        std::cin >> i;
        ++counter;
    }

    std::sort(numbers.begin(), numbers.end());

    std::cout << "sorted numbers are: ";
    for (auto& i : numbers) {
        std::cout << i << " . ";
    }

    std::cout << std::endl;

    return 0;
}
