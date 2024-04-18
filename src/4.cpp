//lozi ba *

#include <iostream>

int main()
{
    int ghotr;

    std::cout << "andaze ghotre bozorg chand bashe? ";
    std::cin >> ghotr;
    std::cout << std::endl;

    int needed = ((ghotr/2)+1);
    int count = needed;
    //t
    
        for (int j {0}; j < needed; ++j) {
            //cout count-1 spaces + j+1 * + j *
            for (int c {0}; c < (count-1); ++c) { std::cout << " "; }
            for (int k {0}; k < (j+1); ++k) { std::cout << "*"; }
            for (int n {0}; n < j; ++n) { std::cout << "*"; }
            count--;
            std::cout << std::endl;
        } 
    
    //b
        count = 1;

        for (int j {needed-1}; j > 0; --j) {
            //cout count spaces + j * + j-1 *
            for (int c {0}; c < (count); ++c) { std::cout << " "; }
            for (int k {0}; k < (j); ++k) { std::cout << "*"; }
            for (int n {0}; n < (j-1); ++n) { std::cout << "*"; }
            count++;
            std::cout << std::endl;
        }


    return 0;
}
