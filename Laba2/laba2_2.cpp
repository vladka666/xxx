#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    double d, x1, x2;
    std::cout << "Enter a:" << std::endl;
    std::cin >> a;

    while (a == 0) {
        std::cout << "Enter not zero a value:" << std::endl;
        std::cin >> a;
    }

    std::cout << "Enter b:" << std::endl;
    std::cin >> b;

    std::cout << "Enter c:" << std::endl;
    std::cin >> c;

    d = pow(b, 2) - 4*a*c;

    double z = b*-1 - sqrt(d);

    x1 = (b*-1 - sqrt(d)) / 2*a;
    x2 = (b*-1 + sqrt(d)) / 2*a;

    std::cout << "x1: " << x1 << std::endl << "x2: " << x2 << std::endl;

    return 0;
}
