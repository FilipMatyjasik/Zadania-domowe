#include <iostream>
using namespace std;

int main() {
    int n;

    // Pobranie wartoœci n od u¿ytkownika
    cout << "Podaj liczbê n: ";
    cin >> n;

    int liczba = 0;

    // Liczenie liczb spe³niaj¹cych warunki
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            liczba++;
        }
    }

    // Wyœwietlenie wyniku
    cout << "Liczba liczb naturalnych nie wiêkszych od " << n
        << ", które s¹ podzielne przez 5, ale nie podzielne przez 3, wynosi: "
        << liczba << endl;

    return 0;
}