#include <iostream>

int main() {
    int i, n;
    float s = 1;

    std::cout << "Input count members: ";
    std::cin >> n;

    for (i = 2; i <= n; i++) s = s + (float)1 / (float)i;
    std::cout << "Sum: 1 + 1/2 + ... + 1/n: " << s << std::endl;

    return 0;
}
