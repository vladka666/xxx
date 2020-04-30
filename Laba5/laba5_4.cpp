#include <iostream>

void MIX(const int a[], const int b[], int sizeA, int sizeB) {
    int cFullSize = sizeA + sizeB;
    int c[cFullSize], cLast = cFullSize - 1, cFirst = 0;

    for (int i = 0; i < sizeA; ++i) {
        if (a[i] % 2 == 0) {
            c[cFirst++] = a[i];
        } else {
            c[cLast--] = a[i];
        }
    }

    for (int j = 0; j < sizeB; ++j) {
        if (b[j] % 2 == 0) {
            c[cFirst++] = b[j];
        } else {
            c[cLast--] = b[j];
        }
    }

    std::cout << "C elements: " << std::endl;
    for (int k = 0; k < cFullSize; ++k) {
        std::cout << c[k] << std::endl;
    }
    std::cout << std::endl;

}

int main() {
    const int sizeM = 4;
    const int sizeN = 5;
    int a[sizeM], b[sizeM];

    for (int j = 0; j < sizeN; ++j) {
        std::cout << "Enter " << j << " element of A array" << std::endl;
        std::cin >> a[j];
    }

    for (int j = 0; j < sizeN; ++j) {
        std::cout << "Enter " << j << " element of C array" << std::endl;
        std::cin >> b[j];
    }

    MIX(a, b, sizeM, sizeN);

    return 0;
}
