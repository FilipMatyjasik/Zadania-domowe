#include <iostream>
using namespace std;

int main() {
    int n;

    // Pobranie warto�ci n od u�ytkownika
    cout << "Podaj liczb� n: ";
    cin >> n;

    int liczba = 0;

    // Liczenie liczb spe�niaj�cych warunki
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            liczba++;
        }
    }

    // Wy�wietlenie wyniku
    cout << "Liczba liczb naturalnych nie wi�kszych od " << n
        << ", kt�re s� podzielne przez 5, ale nie podzielne przez 3, wynosi: "
        << liczba << endl;

    return 0;
}