#include <iostream>
#include <vector>
#include <unordered_map> // dla mapy haszuj�cej
#include <algorithm>     // dla funkcji max_element

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

    // Tworzymy map�, kt�ra zlicza wyst�pienia poszczeg�lnych element�w
    unordered_map<int, int> licznik;

    // Zliczanie wyst�pie� element�w w tablicy
    for (int i = 0; i < n; ++i) {
        licznik[tablica[i]]++;
    }

    // Zmienna do przechowywania najcz�ciej wyst�puj�cego elementu
    int najczesciej_wystepujacy = tablica[0];
    int max_wystapienia = licznik[najczesciej_wystepujacy];

    // Szukanie elementu, kt�ry wyst�puje najcz�ciej
    for (const auto& para : licznik) {
        if (para.second > max_wystapienia) {
            najczesciej_wystepujacy = para.first;
            max_wystapienia = para.second;
        }
    }

    // Wy�wietlanie wyniku
    cout << "Najcz�ciej wyst�puj�cy element to: " << najczesciej_wystepujacy << endl;

    return 0;
}
