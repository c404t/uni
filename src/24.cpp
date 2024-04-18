//adad begir bozorgtarin ragham va tedad tekraro namayesh bede

#include <iostream>
#include <string>

int main() {
    int number;

    std::cout << "enter your desired number: ";
    std::cin >> number;

    std::string no {std::to_string(number)};

    int greatest = no[0] - '0';
    for (int i{0}; i < no.size(); ++i) {
        if (no[i] - '0' > greatest) {
            greatest = no[i] - '0';
        }
    }

    std::cout << std::endl << "greatest number is : " << greatest << std::endl;

    return 0;
}
