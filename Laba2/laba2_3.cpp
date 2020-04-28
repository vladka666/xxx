#include <iostream>

int main() {
    int a, b, c, d, e, f;

    std::cout << "Input first grade: " << std::endl;
    std::cin >> a;
    std::cout << "Input second grade: " << std::endl;
    std::cin >> b;
    std::cout << "Input third grade: " << std::endl;
    std::cin >> c;
    std::cout << "Input fourth grade: " << std::endl;
    std::cin >> d;
    std::cout << "Input fifth grade: " << std::endl;
    std::cin >> e;
    f = (a + b + c + d + e) / (double)5;
    std::cout << "Average grade: " << f << std::endl;

    switch (f / 10)
    {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            std::cout << "First division";
            break;
        case 5:
            std::cout << "Second division";
            break;
        case 4:
            std::cout << "Third division";
            break;
        default:
            std::cout << "Failure";
    }

    return 0;
}
