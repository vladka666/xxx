#include <iostream>

int main() {
    int i, n;
    float s = 2;

    std::cout << "Input count members: ";
    std::cin >> n;

    for (i = 4; i <= n; i++) s = s + (float)1 / (float)i;
    std::cout << "Sum: 2 + 1/2 + ... + 1/n: " << s << std::endl;

    return 0;
}
