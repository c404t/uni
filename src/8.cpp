//chap mosalase khas

#include <iostream>
#include <iomanip>

int main()
{
    int n = 8;

    for (int i = 0; i < n; ++i) {
        int number = 1;

        for (int s {0}; s < (n-i); ++s) {
            std::cout << " ";
        }

        for (int j = 0; j <= i; ++j) {
            std::cout << std::setw(2) << number;
            number = number * (i-j)/(j+1);
        }
        std::cout << std::endl;
    }

    return 0;
}  
