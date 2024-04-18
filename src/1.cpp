//5 adad begir, show pos, neg and zeros

#include <iostream>
#include <vector>

int main()
{
    int positive {0};
    int negative {0};
    int zero {0};

    std::vector<int> number(5);

    for(int i : number) {
        int counter {1};
        std::cout << "enter number " << counter << " : ";
        std::cin >> number[i];
        if (number[i] > 0) { positive++; }
        if (number[i] < 0) { negative++; } 
        if (number[i] == 0) { zero++; }
        counter++;
    }

    std::cout << "there's " << positive << " positive numbers. \n";
    std::cout << "there's " << negative << " negative numbers. \n"; 
    std::cout << "there's " << zero << " zeros. \n";

    return 0;
}
