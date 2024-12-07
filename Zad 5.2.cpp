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

    // Tworzymy dynamiczn� tablic� o rozmiarze n
    int* tablica = new int[n];

    // Wczytanie element�w tablicy
    cout << "Podaj " << n << " liczb calkowitych:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> tablica[i];
    }

    // Wy�wietlenie zawarto�ci tablicy przed zamian� (pionowo, z podzia�em na dwie grupy)
    cout << "Tablica wejsciowa:" << endl;
    int mid = n / 2; // �rodkowy indeks, kt�ry dzieli tablic�
    for (int i = 0; i < mid; ++i) {
        cout << tablica[i] << "\t\t" << tablica[n - i - 1] << endl;
    }

    // Je�li liczba element�w jest nieparzysta, wy�wietlamy �rodkowy element
    if (n % 2 != 0) {
        cout << tablica[mid] << endl;
    }

    // Zamiana miejscami element�w po przeciwnych stronach pionowej linii
    for (int i = 0; i < mid; ++i) {
        int temp = tablica[i];
        tablica[i] = tablica[n - i - 1];
        tablica[n - i - 1] = temp;
    }

    // Wy�wietlenie zawarto�ci tablicy po zamianie (pionowo, z podzia�em na dwie grupy)
    cout << "Tablica wyjsciowa:" << endl;
    for (int i = 0; i < mid; ++i) {
        cout << tablica[i] << "\t\t" << tablica[n - i - 1] << endl;
    }

    // Je�li liczba element�w jest nieparzysta, wy�wietlamy �rodkowy element
    if (n % 2 != 0) {
        cout << tablica[mid] << endl;
    }

    // Zwolnienie pami�ci
    delete[] tablica;

    return 0;
}