#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
    srand(time(NULL));
    int b = rand() % 90 + 10;

    std::cout << b;

    return 0;
}
