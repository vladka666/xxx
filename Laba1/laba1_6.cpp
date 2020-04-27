#include <iostream>

int main() {
    double x;
    std::cout << "Enter any number" << std::endl;
    std::cin >> x;
    (x > 0) ? std::cout << "Your num is positive" : std::cout << "Your num is negative";

    return 0;
}
