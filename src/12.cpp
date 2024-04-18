//addad begir jamesh az yek ta ono namyesh bede.

#include <iostream> 

int main() 
{
    int number;
    int sum {0};

    std::cout << "enter a number: ";
    std::cin >> number;
    std::cout << std::endl;

    for (int i {1}; i <= number; ++i) {
        if(i == number) { 
            std::cout << i << " = ";
        } 
        else { 
        std::cout << i << " + ";
        }

        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}
