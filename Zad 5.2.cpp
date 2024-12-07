#include <iostream>

using namespace std;

int main() {
    int n;

    // Wczytanie rozmiaru tablicy
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    // Sprawdzamy, czy rozmiar tablicy jest dodatni
    if (n <= 0) {
        cout << "Rozmiar tablicy musi byc liczba dodatnia!" << endl;
        return 1;
    }

    // Tworzymy dynamiczn¹ tablicê o rozmiarze n
    int* tablica = new int[n];

    // Wczytanie elementów tablicy
    cout << "Podaj " << n << " liczb calkowitych:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> tablica[i];
    }

    // Wyœwietlenie zawartoœci tablicy przed zamian¹ (pionowo, z podzia³em na dwie grupy)
    cout << "Tablica wejsciowa:" << endl;
    int mid = n / 2; // œrodkowy indeks, który dzieli tablicê
    for (int i = 0; i < mid; ++i) {
        cout << tablica[i] << "\t\t" << tablica[n - i - 1] << endl;
    }

    // Jeœli liczba elementów jest nieparzysta, wyœwietlamy œrodkowy element
    if (n % 2 != 0) {
        cout << tablica[mid] << endl;
    }

    // Zamiana miejscami elementów po przeciwnych stronach pionowej linii
    for (int i = 0; i < mid; ++i) {
        int temp = tablica[i];
        tablica[i] = tablica[n - i - 1];
        tablica[n - i - 1] = temp;
    }

    // Wyœwietlenie zawartoœci tablicy po zamianie (pionowo, z podzia³em na dwie grupy)
    cout << "Tablica wyjsciowa:" << endl;
    for (int i = 0; i < mid; ++i) {
        cout << tablica[i] << "\t\t" << tablica[n - i - 1] << endl;
    }

    // Jeœli liczba elementów jest nieparzysta, wyœwietlamy œrodkowy element
    if (n % 2 != 0) {
        cout << tablica[mid] << endl;
    }

    // Zwolnienie pamiêci
    delete[] tablica;

    return 0;
}