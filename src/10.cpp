//chape mosalase khas ba vorodi

#include <iostream>
#include <iomanip>

int main()
{
    int rows;

    std::cout << "how many rows do you want to have? ";
    std::cin >> rows;
    
    int row_counter = rows; 

    std::cout << std::endl;

    //lines loop
    for (int i{0}; i < rows; ++i) {
        //cout spaces
        for (int s{0}; s < (i+1); ++s) { 
            std::cout << " ";
        } 

        int number = row_counter;

        //cout numbers 
        for (int n{row_counter}; n > 0; --n) {
            std::cout << std::setw(3) << number;
            --number;
        }
        std::cout << std::endl; 
        --row_counter;
    }

    return 0;
}
