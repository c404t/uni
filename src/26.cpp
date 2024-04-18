//hadeaghal 10 addad begir , bego har adad chand bar va dar koja tekrar shode

#include <iostream>
#include <array>


int counter;
int wow {1};
std::array<int, 10> numbers;

void report(int i) {
    counter = 0;
    for (int m{0}; m < numbers.size(); ++m) {
        if (numbers[m] == numbers[i]) {
            counter++;
        }
    }
    std::cout << "slot [ " << wow << " ] " << "number " << numbers[i] << " occurs " << counter << " times.";
    ++wow;
}

int main()
{
    std::cout << "enter 10 numbers for the report. " << std::endl;

    for (int i{0}; i < numbers.size(); ++i) {
        std::cout << "enter a number for slot " << (i+1) << " : ";
        std::cin >> numbers[i];
    }

    for (int i{0}; i < numbers.size(); ++i) {
        report(i);
        std::cout << std::endl;
    }

    return 0;
}
