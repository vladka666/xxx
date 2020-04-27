#include <iostream>

int main() {
    int angle1, angle2, angle3;

    std::cout << "Enter the angles value" << std::endl;
    std::cin >> angle1 >> angle2 >> angle3;

    ((angle1 + angle2 + angle3) == 180) ? std::cout << "Triangle is valid" << std::endl : std::cout << "Invalid triangle" << std::endl;

    return 0;
}
