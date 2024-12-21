#include <iostream>
#include <string>
using namespace std;

int main() {
    string tekst;
    int n;

    // Wczytanie tekstu i liczby n
    cout << "Podaj tekst, który ma byæ skopiowany: ";
    getline(cin, tekst);  // U¿ywamy getline, aby umo¿liwiæ wprowadzenie tekstu z spacjami
    cout << "Podaj ile razy chcesz powtórzyæ ten tekst: ";
    cin >> n;

    // Sprawdzanie, czy liczba n jest wiêksza ni¿ 0
    if (n <= 0) {
        cout << "Liczba powtórzeñ musi byæ wiêksza ni¿ 0!" << endl;
        return 1;
    }

    string wynik = "";

    // Wykonywanie konkatenacji
    for (int i = 0; i < n; i++) {
        wynik += tekst;
        if (i < n - 1) {
            wynik += ", ";  // Dodanie tabulatora, ale nie po ostatnim powtórzeniu
        }
    }

    // Wyœwietlenie wyniku
    cout << "Wynik konkatenacji: " << wynik << endl;

    return 0;
}

