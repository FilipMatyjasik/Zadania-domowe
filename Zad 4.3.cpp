#include <iostream>

using namespace std;

int main() {
    // Deklaracja tablicy 10x10
    int tablica[10][10] = { 0 }; // Wszystkie elementy s¹ pocz¹tkowo ustawione na 0

    // Wype³nianie tablicy zgodnie z wymaganiami
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            tablica[i][0] = i;                          // W pierwszej kolumnie liczby od 0 do 9
            tablica[i][1] = i + i;            // W drugiej kolumnie suma liczb od 0 do i
            tablica[i][2] = i * i;                      // W trzeciej kolumnie kwadraty liczb
            tablica[i][3] = i + 1 + j + 1;                  // W czwartej kolumnie suma numeru wiersza i kolumny
            tablica[i][4] = i - j;                      // W pi¹tej kolumnie ró¿nica numeru wiersza i kolumny
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
