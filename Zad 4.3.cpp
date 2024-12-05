#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main() {
    int tablica[10][10] = { 0 };
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            tablica[i][0] = i;
            tablica[i][1] = i + i;
            tablica[i][2] = i * i;
            tablica[i][3] = i + 1 + j + 1;
            tablica[i][4] = i - j;
            cout << setw(4) << tablica[i][j];
        }
        cout << endl;
    }
    getch();
    return 0;
}
