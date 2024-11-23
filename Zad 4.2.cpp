#include <iostream>
#include <vector>
#include <unordered_map> // dla mapy haszuj¹cej
#include <algorithm>     // dla funkcji max_element

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

    // Tworzymy mapê, która zlicza wyst¹pienia poszczególnych elementów
    unordered_map<int, int> licznik;

    // Zliczanie wyst¹pieñ elementów w tablicy
    for (int i = 0; i < n; ++i) {
        licznik[tablica[i]]++;
    }

    // Zmienna do przechowywania najczêœciej wystêpuj¹cego elementu
    int najczesciej_wystepujacy = tablica[0];
    int max_wystapienia = licznik[najczesciej_wystepujacy];

    // Szukanie elementu, który wystêpuje najczêœciej
    for (const auto& para : licznik) {
        if (para.second > max_wystapienia) {
            najczesciej_wystepujacy = para.first;
            max_wystapienia = para.second;
        }
    }

    // Wyœwietlanie wyniku
    cout << "Najczêœciej wystêpuj¹cy element to: " << najczesciej_wystepujacy << endl;

    return 0;
}
