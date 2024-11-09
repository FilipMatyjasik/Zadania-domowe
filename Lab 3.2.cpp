#include <iostream>
using namespace std;
int main() {
    char znak;
        cout << "Wpisuj znaki. Program zakoñczy siê, gdy wpiszesz 't'.\n";
    // Pêtla, która wczytuje znaki z klawiatury
    while (true) {
        cin >> znak;
        // Sprawdzenie, czy wpisany znak to 't'
        if (znak == 't') {
            break; // Przerwij pêtlê, jeœli u¿ytkownik wpisze 't'
        }
        // Wyœwietlenie wprowadzonego znaku
        cout << "Wpisany znak: " << znak << "\n";
    }
    cout << "Program zakoñczony.\n";
    return 0;
}