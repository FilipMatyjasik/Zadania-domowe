#include <iostream>
#include <vector>
#include <algorithm>  // dla funkcji max_element

using namespace std;

int main() {
    int n;

    // Pobranie liczby element�w tablicy od u�ytkownika
    cout << "Podaj liczb� element�w w tablicy: ";
    cin >> n;

    // Tworzymy wektor, kt�ry b�dzie przechowywa� elementy tablicy
    vector<int> tablica(n);

    // Pobranie element�w tablicy
    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Znalezienie najwi�kszego elementu
    int najwiekszy_element = *max_element(tablica.begin(), tablica.end());

    // Wy�wietlanie wyniku
    cout << "Najwi�kszy element w tablicy to: " << najwiekszy_element << endl;

    return 0;
}
