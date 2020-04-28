#include <iostream>

void showChoice() {
    std::cout << "Enter ection (+, -, *, /) then enter 2 numbers" << std::endl;
}

double add(double x, double y) {
    return x + y;
}

double substrcut(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}

int main() {
    double x, y;
    char action;

    showChoice();
    std::cout << "Enter action" << std::endl;
    std::cin >> action;
    std::cout << "Enter first num" << std::endl;
    std::cin >> x;
    std::cout << "Enter second num" << std::endl;
    std::cin >> y;

    switch (action)
    {
        case '+':
            std::cout << "Your sum is: " << add(x, y) << std::endl;
            break;
        case '-':
            std::cout << "Your substruct is: " << substrcut(x, y) << std::endl;
            break;
        case '*':
            std::cout << "Your multiply is: " << multiply(x, y) << std::endl;
            break;
        case '/':
            std::cout << "Your divide is: " << divide(x, y) << std::endl;
            break;
        default:;
    }

    return 0;
}
