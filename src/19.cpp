//adad begir, zoj va fard ha ro dar araye joda zakhire kon bad namayesh bede

#include <iostream>
#include <array>
#include <vector>

int main()

{
    std::array<int, 10> get;
    std::vector<int> even;
    std::vector<int> odd;

    std::cout << "you're going to enter 10 numbers" << std::endl;

    for (int i {0}; i < 10; ++i) {
        std::cout << "enter number " << (i+1) << " : ";
        std::cin >> get[i];

        if (get[i]%2 == 0) {
            even.push_back(get[i]);
        } else {
            odd.push_back(get[i]);
        }
    }

    std::cout << std::endl;

    std::cout << "even numbers are: ";
    for (int i {0}; i < even.size(); ++i)
        std::cout << even[i] << ". ";
    std::cout << std::endl;

    std::cout << "odd numbers are: ";
    for (int i {0}; i < even.size(); ++i)
        std::cout << odd[i] << ". ";

    std::cout << std::endl;

    return 0;
}
