//adad begir argham zojo neshon bede

#include <iostream>
#include <string>

int main()
{
    std::string number;

    std::cout << "enter a number: ";
    std::cin >> number;

    std::cout << "even numbers are: ";

    for (auto i {0}; i < number.size(); ++i) {
        if (number[i]%2 == 0) { 
            std::cout << number[i] << ". ";
        }
    }

    std::cout << std::endl;

    return 0;
}
