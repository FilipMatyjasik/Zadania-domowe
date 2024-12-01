#include <iostream>

using namespace std;

int main() {
    int tablica[10][10] = { 0 };
    // Wypełnianie tablicy zgodnie z wymaganiami
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            tablica[i][0] = i;
            tablica[i][1] = i + i;
            tablica[i][2] = i * i;
            tablica[i][3] = i + 1 + j + 1;
            tablica[i][4] = i - j;
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
