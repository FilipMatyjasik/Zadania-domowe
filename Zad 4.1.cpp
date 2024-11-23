#include <iostream>
#include <vector>
#include <algorithm>  // dla funkcji max_element

using namespace std;

int main() {
    int n;

    // Pobranie liczby elementów tablicy od użytkownika
    cout << "Podaj liczbę elementów w tablicy: ";
    cin >> n;

    // Tworzymy wektor, który będzie przechowywał elementy tablicy
    vector<int> tablica(n);

    // Pobranie elementów tablicy
    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Znalezienie największego elementu
    int najwiekszy_element = *max_element(tablica.begin(), tablica.end());

    // Wyświetlanie wyniku
    cout << "Największy element w tablicy to: " << najwiekszy_element << endl;

    return 0;
}
