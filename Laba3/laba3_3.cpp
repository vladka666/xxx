#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int a = -1;
    srand(time(nullptr));
    int b = rand() % 100;

    std::cout << "Enter a number" << std::endl;

    while(a != b)
    {
        std::cin >> a;
        if(a > b)
            std::cout << "More" << std::endl;
        else if(a < b)
            std::cout << "Less" << std::endl;
        else if(a == b)
            std::cout << "The number was: "  << a << std::endl;
    }

    return 0;
}
