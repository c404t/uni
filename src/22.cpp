//do adad begir, adad zoj beineshoono chap kon

#include <iostream>

int main() {
    int min, max;

    std::cout << "enter the lower bound number: ";
    std::cin >> min;
    std::cout << std::endl;

    std::cout << "enter the higher bound number: ";
    std::cin >> max;
    std::cout << std::endl;

    std::cout << "even numbers between these two bounds are: ";

    for (auto i {min+1}; i < max; ++i) {
        if (i%2 == 0) {
            std::cout << i << " . ";
        }
    }
    std::cout << std::endl;

    return 0;
}
