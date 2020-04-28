#include <iostream>

int main() {
    int num;
    int sum = 0;

    std::cout << "Please, enter any number: " << std::endl;
    std::cin >> num;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
