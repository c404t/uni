//chape mosalase khas ;-;

#include <iostream>
#include <iomanip>

int main() 
{
    int number;

    std::cout << "enter a number: ";
    std::cin >> number;

    int lines = number;
    int lines_alt = number;

    //lines loop
    for (int i {0}; i <= number; ++i) {
        //spaces loop
        for (int j {0}; j < lines; ++j) {
            std::cout << " "; 
        }
        --lines;
        //show numbers
        for (int n {number}; n > lines_alt; --n) {
            std::cout << std::setw(2) << i;
        }
        --lines_alt;
        std::cout << std::endl;
    }
    return 0;
}
