#include <iostream>
#include <vector>
#include <algorithm>  // dla funkcji max_element

using namespace std;

int main() {
    int n;

    // Pobranie liczby elementów tablicy od u¿ytkownika
    cout << "Podaj liczbê elementów w tablicy: ";
    cin >> n;

    // Tworzymy wektor, który bêdzie przechowywa³ elementy tablicy
    vector<int> tablica(n);

    // Pobranie elementów tablicy
    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Znalezienie najwiêkszego elementu
    int najwiekszy_element = *max_element(tablica.begin(), tablica.end());

    // Wyœwietlanie wyniku
    cout << "Najwiêkszy element w tablicy to: " << najwiekszy_element << endl;

    return 0;
}
