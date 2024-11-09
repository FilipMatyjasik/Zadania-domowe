#include <iostream>
#include <cmath> // Dla funkcji sqrt() do obliczania pierwiastków

using namespace std;

int main() {
    // Zmienne do przechowywania wspó³czynników a, b, c
    double a, b, c;

    // Wypisanie ogólnej formy równania kwadratowego
    cout << "Rozwiazywanie rownania kwadratowego ax^2 + bx + c = 0" << endl;

    // Pobranie wspó³czynników a, b, c od u¿ytkownika
    cout << "Podaj wspolczynnik a (a != 0): ";
    cin >> a;
    while (a == 0) {
        cout << "Wspolczynnik a nie moze byc zerem. Podaj ponownie: ";
        cin >> a;
    }

    cout << "Podaj wspolczynnik b: ";
    cin >> b;

    cout << "Podaj wspolczynnik c: ";
    cin >> c;

    // Wypisanie równania kwadratowego
    cout << "Twoje rownanie kwadratowe to: ";
    if (a != 1 && a != -1)
        cout << a;
    else if (a == -1)
        cout << "-";

    cout << "x^2 ";

    if (b > 0)
        cout << "+ " << b << "x ";
    else if (b < 0)
        cout << "- " << -b << "x ";

    if (c > 0)
        cout << "+ " << c;
    else if (c < 0)
        cout << "- " << -c;

    cout << " = 0" << endl;

    // Obliczanie delt
    double delta = b * b - 4 * a * c;

    // Sprawdzanie, jakie s¹ pierwiastki
    if (delta > 0) {
        // Dwa pierwiastki
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Rownanie ma dwa pierwiastki rzeczywiste:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        // Jeden pierwiastek
        double x = -b / (2 * a);
        cout << "Rownanie ma jeden pierwiastek rzeczywisty:\n";
        cout << "x = " << x << endl;
    }
    else {
        // Pierwiastki zespolone
        double real = -b / (2 * a);
        double imag = sqrt(-delta) / (2 * a);
        cout << "Rownanie ma pierwiastki zespolone:\n";
        cout << "x1 = " << real << " + " << imag << "i\n";
        cout << "x2 = " << real << " - " << imag << "i\n";
    }

    return 0;
}