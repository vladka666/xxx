#include <iostream>

int main() {
    int i, j,
            column = 9,
            row = 2,
            arrFirst[column][row],
            arrSecond[column][row],
            result[column][row];

    for (i = 0; i < column; i++) {
        for (j = 0; j < row; j++) {
            std::cout << "Enter " << i << " x " << j << "element";
            std::cin >> arrFirst[i][j];
        }
    }
    for (i = 0; i < column; i++) {
        for (j = 0; j < row; j++) {
            std::cout << "Enter " << i << " x " << j << "element";
            std::cin >> arrSecond[i][j];
        }
    }

    for (i = 0; i < column; i++) {
        for (j = 0; j < row; j++) {
            result[i][j] = arrFirst[i][j] + arrSecond[i][j];
        }
    }
    for (i = 0; i < column; i++) {
        std::cout << std::endl;
        for (j = 0; j < row; j++) {
            std::cout << result[i][j] << " ";
        }
    }

    return 0;
}
