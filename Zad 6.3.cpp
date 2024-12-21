#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Definicja struktury Student
struct Student {
    string imie;
    string nazwisko;
    int numerIndeksu;

    // Konstruktor do wygodnego tworzenia studentow
    Student(string i, string n, int num) : imie(i), nazwisko(n), numerIndeksu(num) {}
};

// Funkcja porownuj¹ca studentow wedlug numerow indeksow
bool porownajIndeksy(const Student& s1, const Student& s2) {
    return s1.numerIndeksu < s2.numerIndeksu;
}

// Funkcja do wyswietlania studentow
void wyswietlStudentow(const vector<Student>& studenci) {
    for (const auto& student : studenci) {
        cout << student.imie << ", " << student.nazwisko
            << ", " << student.numerIndeksu << endl;
    }
}

int main() {
    // Dane studentow zdefiniowane w kodzie
    vector<Student> studenci = {
        Student(12345, "Jan", "Kowalski"),
        Student(69541, "Ewa", "Chodakowska"),
        Student(4, "Mariusz", "Pudzianowski"),
        Student(1224, "Maria", "Naizdup"),
        Student(45422, "Tomasz", "Kaczmarski"),
        Student(696969696, "Anna", "Lewandowska")
    };

    // Wyowietlanie studentow przed sortowaniem
    cout << "Wektor przed sortowaniem:\n";
    cout << endl;
    wyswietlStudentow(studenci);

    // Sortowanie studentow wedlug numerow indeksow
    sort(studenci.begin(), studenci.end(), porownajIndeksy);

    // Wyswietlanie studentow po sortowaniu
    cout << endl;
    cout << "\nWektor posortowaniy:\n";
    cout << endl;
    wyswietlStudentow(studenci);

    return 0;
}
