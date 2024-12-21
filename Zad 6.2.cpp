#include <iostream>
#include <string>
using namespace std;

struct Uczen {
    string imie;
    int informatyka;
    int matematyka;
    int biologia;
    int jezykPolski;
};

int main() {
    Uczen uczniowie[6]; // Tablica 6 uczniów

    // Wczytanie danych uczniów
    for (int i = 0; i < 6; i++) {
        cout << "Podaj imie ucznia " << i + 1 << ": ";
        cin >> uczniowie[i].imie;

        cout << "Podaj oceny z przedmiotow dla ucznia " << uczniowie[i].imie << ":\n";
        cout << "Informatyka: ";
        cin >> uczniowie[i].informatyka;
        cout << "Matematyka: ";
        cin >> uczniowie[i].matematyka;
        cout << "Biologia: ";
        cin >> uczniowie[i].biologia;
        cout << "Jezyk polski: ";
        cin >> uczniowie[i].jezykPolski;
    }

    // Interaktywne zapytanie o oceny
    int numerUcznia, przedmiot;

    while (true) {
        cout << "\nPodaj numer ucznia (1-6) lub 0, aby zakonczyc: ";
        cin >> numerUcznia;

        if (numerUcznia == 0) {
            break; // Zakoñczenie programu
        }

        if (numerUcznia < 1 || numerUcznia > 6) {
            cout << "Nieprawidlowy numer ucznia!\n";
            continue;
        }

        cout << "Podaj numer przedmiotu (1 - Informatyka, 2 - Matematyka, 3 - Biologia, 4 - Jezyk polski): ";
        cin >> przedmiot;

        if (przedmiot < 1 || przedmiot > 4) {
            cout << "Nieprawidlowy numer przedmiotu!\n";
            continue;
        }

        // Wyœwietlanie odpowiedzi na podstawie numeru ucznia i przedmiotu
        switch (przedmiot) {
        case 1:
            cout << "Ocena z informatyki ucznia " << uczniowie[numerUcznia - 1].imie << ": "
                << uczniowie[numerUcznia - 1].informatyka << endl;
            break;
        case 2:
            cout << "Ocena z matematyki ucznia " << uczniowie[numerUcznia - 1].imie << ": "
                << uczniowie[numerUcznia - 1].matematyka << endl;
            break;
        case 3:
            cout << "Ocena z biologii ucznia " << uczniowie[numerUcznia - 1].imie << ": "
                << uczniowie[numerUcznia - 1].biologia << endl;
            break;
        case 4:
            cout << "Ocena z jezyka polskiego ucznia " << uczniowie[numerUcznia - 1].imie << ": "
                << uczniowie[numerUcznia - 1].jezykPolski << endl;
            break;
        }
    }

    return 0;
}
