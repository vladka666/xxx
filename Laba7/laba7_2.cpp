#include <iostream>
#include <iomanip>

using namespace std;

struct student {
    int number;
    const char *name;
    bool biology;
    bool mathematics;
    bool chemistry;
};

int main() {
    const int n = 25;
    int i, nameLength;

    student a[n] = {
            {1,  "Amore Vano",   true,  false, true},
            {2,  "Anderson Alex",  true,  false, true},
            {3,  "Brown Else",    false, true,  false},
            {4,  "Clark Maria",    false, true,  true},
            {5,  "Davis Max",    true,  true,  true},
            {6,  "Evans Kira",    true,  false, false},
            {7,  "Garcia Thea",       true,  false, true},
            {8,  "Hall Lida",    true,  false, false},
            {9,  "Hill Arina",      true, false, true},
            {10, "Jackson Bagira",     false,  false, true},
            {11, "Jones Itan", true,  false, true},
            {12, "Lee Ivan",   true,  true,  false},
            {13, "Lewis Tomas",   true,  false, true},
            {14, "Martinez Gloria",      false, true,  true},
            {15, "Mitchell Jinni", true,  false, true},
            {16, "Perez Nina",  true,  true,  true},
            {17, "Phillips Karina",      true,  false, true},
            {18, "Phillips Marina",      true,  true,  false},
            {19, "Roberts Anna",  false, true,  true},
            {20, "Scott Lika",       false, false, false},

},
    cout << "ID#\t"
         << setw(24) << std::left << "Students name"
         << setw(8) << "Biology"
         << setw(8) << "Mathematics"
         << setw(8) << "Chemistry"
         << endl;

    for (i = 0; i < n; i++) {
        cout << a[i].number << "\t"
             << setw(24) << a[i].name
             << setw(8) << a[i].biology
             << setw(8) << a[i].mathematics
             << setw(8) << a[i].chemistry
             << endl;
    }

    cout << "Students that failed more then 1 exam" << endl << endl;

    for (i = 0; i < n; i++) {
        if ((int) a[i].biology + (int) a[i].mathematics + (int) a[i].chemistry <= 1) {
            cout << a[i].number << "\t"
                 << setw(24) << a[i].name
                 << setw(8) << a[i].biology
                 << setw(8) << a[i].mathematics
                 << setw(8) << a[i].chemistry
                 << endl;
        }
    }
    return 0;
}
