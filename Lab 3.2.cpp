#include <iostream>
using namespace std;
int main() {
    char znak;
        cout << "Wpisuj znaki. Program zako�czy si�, gdy wpiszesz 't'.\n";
    // P�tla, kt�ra wczytuje znaki z klawiatury
    while (true) {
        cin >> znak;
        // Sprawdzenie, czy wpisany znak to 't'
        if (znak == 't') {
            break; // Przerwij p�tl�, je�li u�ytkownik wpisze 't'
        }
        // Wy�wietlenie wprowadzonego znaku
        cout << "Wpisany znak: " << znak << "\n";
    }
    cout << "Program zako�czony.\n";
    return 0;
}