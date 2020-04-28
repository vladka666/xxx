#include <iostream>

int simple_numbers(int x, int y) {
    int a, b, c, d, l = 0;

    for (a = x; a <= y; a++) {
        c = a / 2;
        d = 0;

        for (b = 2; b <= c; b++) {
            if ((a % b) == 0) {
                d++;
                break;
            }
        }

        if (d == 0) {
            std::cout << a << "\t";
            l++;
            if ((l > 0) && ((l % 10) == 0)) {
                std::cout << std::endl;
            }
        }
    }

    return l;
}

int main() {
    int x, y;

    std::cout << "Enter 2 nums: " << std::endl;
    std::cin >> x >> y;
    std::cout << "Count of  simple nums: " << simple_numbers(x, y) << std::endl;

    return 0;
}
