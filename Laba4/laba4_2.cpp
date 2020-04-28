#include <iostream>

int zero_small(int &c, int &d) {
    if (c < d)
        c = 0;
    else if (c > d)
        d = 0;
    return 0;
}

int main() {
    int c, d;

    std::cout << "Enter 2 nums: " << std::endl;
    std::cin >> c >> d;
    zero_small(c, d);
    std::cout << c << std::endl << d;

    return 0;
}
