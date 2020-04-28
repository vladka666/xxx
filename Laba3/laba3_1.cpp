#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    float s, q;

    std::cout << "Enter first side of triangle: ";
    std::cin >> a;
    std::cout << "Enter second side of triangle: ";
    std::cin >> b;
    std::cout << "Enter third side of triangle: ";
    std::cin >> c;

    s = (float)(a + b + c) / 2;
    q = sqrt ((float)s * (s - (float)a)*(s - (float)b) * (s - (float)c));

    std::cout << "The area is " << q;

    return 0;
}
