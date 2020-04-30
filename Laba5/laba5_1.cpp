#include <iostream>

int main() {
    double arr[20];
    double sum = 0, average;

    for (int i = 0; i < 20; ++i) {
        std::cout << "Enter " << i + 1 << " num" << std::endl;
        std::cin >> arr[i];
        sum += arr[i];
    }

    average = sum / 20;
    std::cout
            << "Sum of array: " << sum << std::endl
            << "Average value is " << average << std::endl;

    return 0;
}
