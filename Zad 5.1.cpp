#include <iostream>
#include <vector>  // dla std::vector

using namespace std;

int main() {
    int n;

    // Wczytanie rozmiaru wektora
    cout << "Podaj liczbe elementow wektora: ";
    cin >> n;

    // Sprawdzamy, czy rozmiar wektora jest dodatni
    if (n <= 0) {
        cout << "Rozmiar wektora musi byc liczba dodatnia!" << endl;
        return 1;
    }

    // Tworzymy wektor o rozmiarze n
    vector<int> wektor(n);

    // Wczytanie elementów wektora
    cout << "Podaj " << n << " liczb calkowitych:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> wektor[i];
    }

    // Znalezienie maksymalnego elementu i jego indeksu
    int maxElement = wektor[0];
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (wektor[i] > maxElement) {
            maxElement = wektor[i];
            maxIndex = i;
        }
    }

    // Wyœwietlenie maksymalnego elementu i jego indeksu
    cout << "Maksymalny element wektora: " << maxElement << endl;
    cout << "Indeks maksymalnego elementu: " << maxIndex << endl;

    return 0;
}