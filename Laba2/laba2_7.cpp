#include <iostream>
#include <cstdlib>

int main() {
    std::string inputValue;
    int numsCount = 0;

    std::cout << "Enter any numbers. Enter \"end\" to finish the program" << std::endl;

    while (inputValue != "end") {
        std::cin >> inputValue;
        if (atoi(inputValue.c_str()) > 0) {
            ++numsCount;
        }
    }
    std::cout << "Cunt of positive nums: " << numsCount;

    return 0;
}
