#include <iostream>

int main() {
    int x, y, response;

    std::cout << "Enter first number" << std::endl;
    std::cin >> x;

    std::cout << "Enter second number" << std::endl;
    std::cin >> y;

    response = x + y;
    std::cout << "Your result is " << response;

    return 0;
}
