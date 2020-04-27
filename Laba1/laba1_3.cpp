#include <iostream>

double getFahrenheitDegree(double celDegree) {
    return celDegree * 9 / 5 + 32;
}

int main() {
    double celDegree;
    std::cout << "Enter Celsius degree" << std::endl;
    std::cin >> celDegree;

    std::cout << "Fahrenheit degree: " << getFahrenheitDegree(celDegree);

    return 0;
}
