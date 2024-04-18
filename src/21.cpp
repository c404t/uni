//10 reshte begir be tartibe horoof alefba chap kon

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> words(10);

    std::cout << "you're going to enter 10 words. " << std::endl;

    for (auto i {0}; i < 10; ++i) {
        std::cout << "enter word " << (i+1) << " : ";
        std::cin >> words[i];
    }

    std::sort(words.begin(), words.end());

    std::cout << std::endl << "sorted words: " << std::endl;
    for (auto& i : words) {
        std::cout << i << std::endl;
    }

    return 0;
}

