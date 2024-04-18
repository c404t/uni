//reshte begir tedad character seda daro chap kon

#include <iostream>
#include <string>

int main()
{
    std::string somen;
    int counter {0};

    std::cout << "enter a string: ";
    std::cin >> somen;

    for (auto i {0}; i < somen.size(); ++i) {
        if (somen.at(i) == 'a' || 
            somen.at(i) == 'o' || 
            somen.at(i) == 'u' || 
            somen.at(i) == 'e' || 
            somen.at(i) == 'i') {
        ++counter;
        }
    }
    
    if (counter > 1) {
        std::cout << "there're " << counter << " vowels. " << std::endl;
    } else if (counter == 1) {
        std::cout << "there's " << counter << " vowel. " << std::endl;
    } else {
        std::cout << "there're no vowels. " << std::endl;
    }

    return 0;
}
