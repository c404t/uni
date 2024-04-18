//zele moraba o begir , yedone moraba tokhali chap kon (payam khata ba adad manfi)

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int zel;

    std::cout << "andaze zel chand bashe? ";
    std::cin >> zel;

    if (zel <= 0) {
        std::cout << "are you drunk? \n";
    } else {
        std::vector<std::vector<int>> cube(zel);

        //t
        for (int c {0}; c < zel; ++c) {
            std::cout << std::setw(3) << "*";
        }
        std::cout << std::endl;

        //m
        for (auto i {1}; i < (zel - 1); ++i) {
            std::cout << std::setw(3) << "*";
            for (int j {1}; j < (zel - 1); ++j) {
                std::cout << std::setw(3) << " ";
            }
            std::cout << std::setw(3) << "*" << std::endl;
        }

        //b
        for (int c {0}; c < zel; ++c) {
            std::cout << std::setw(3) << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

