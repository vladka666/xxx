#include <iostream>

int main() {
    int i, j, size = 3, l = 0, r = 0;

    int a[size][size];

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            std::cout << "Enter " << i + 1 << " : " << j + 1 << "element" << std::endl;
            std::cin >> a[i][j];
        }
    }

    for (i = 0; i < size; i++)
        l = l + a[i][i];

    for (i = 0; i < size; i++)
        r = r + a[i][size - i - 1];

    std::cout
            << "Left diagonal is: " << l << std::endl
            << "Right diagonal is: " << r << std::endl;

    return 0;
}
