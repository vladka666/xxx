#include <iostream>

int main() {
    int sum = 0;
    std::cout << "Calculating the sum of the first 10 positive integers." << std::endl;
    for (int i = 0; i < 10; ++i) {
        sum += i;
    }
    std::cout << "The sum is: " << sum;

    return 0;
}
