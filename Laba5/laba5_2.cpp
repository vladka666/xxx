#include <iostream>

int main() {
    int size = 20
    double arr[20];

    for (int i = size - 1; i >= 0; --i) {
        std::cout << "Enter " << size - i << " array num" << std::endl;
        std::cin >> arr[i];
    }

    std::cout << "Reverse order of elements: " << std::endl;
    for (double elem : arr)
        std::cout << elem << std::endl;

    return 0;
}
