#include <iostream>

int main() {

    int size = 3;
    double highest = 0, lowest = 0, arr[size];

    for (int i = 0; i < size; ++i) {
        std::cout << "Enter " << i + 1 << " num of arr" << std::endl;
        std::cin >> arr[i];

        if (i == 0) {
            highest = arr[i];
            lowest = arr[i];
        } else {
            if (arr[i] > highest) {
                highest = arr[i];
            }

            if (arr[i] < lowest) {
                lowest = arr[i];
            }
        }
    }

    std::cout
            << "Your lowest value: " << lowest << std::endl
            << "Your highest value: " << highest << std::endl;

    return 0;
}
