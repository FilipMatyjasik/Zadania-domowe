#include <iostream>
#include <vector>

using namespace std;

// Funkcja do obliczania wspó³czynnika dwumianowego (n choose k)
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Funkcja do wypisania trójk¹ta Pascala
void printPascalsTriangle(int n) {
    for (int row = 0; row < n; ++row) {
        // Wypisanie odpowiedniej liczby spacji dla wyrównania
        for (int space = 0; space < n - row - 1; ++space) {
            cout << " ";
        }

        // Wypisanie wspó³czynników dla bie¿¹cego wiersza
        for (int col = 0; col <= row; ++col) {
            cout << binomialCoefficient(row, col) << " ";
        }

        // Nowa linia po ka¿dym wierszu
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Podaj liczbe wierszy trójk¹ta Pascala: ";
    cin >> n;

    // Wypisanie trójk¹ta Pascala
    printPascalsTriangle(n);

    return 0;
}