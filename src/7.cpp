//chape mosalas ba olgoe khas

#include <iostream> 

int main()
{
    int n = 9;

    for (int i = {0}; i < (n+1); ++i) {
        for (int j {0}; j < (n-i); ++j) {
            std::cout << " ";
        }
        for (int j {0}; j < i; ++j) {
            std::cout << (i)  << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
