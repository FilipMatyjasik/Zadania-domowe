#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj liczbe 'a': ";
    cin >> a;
    cout << "Podaj liczbe 'b': ";
    cin >> b;
    cout << endl;
    cout << "Wartości liczb a == " << a << ", b == " << b << endl;
    cout << endl;
    cout << "Wiersz gwiazdek o długości a:" << endl;
    cout << endl;
    for (int i = 0; i < a; ++i) {
        cout << "*";
    }
    cout << endl;
    cout << endl;
    cout << "Kolumna gwiazdek o długości b:" << endl;
    cout << endl;
    for (int i = 0; i < b; ++i) {
        cout << "*" << endl;
    }
    cout << endl;
    cout << "Prostokat gwiazdek o wymiarach 'a' na 'b':" << endl;
    if (b == 0) {
        cout << endl;
        cout << "Z liczby 0 nie da się zrobić prostokąta!" << endl;
        cout << endl;
    }
    else {
        cout << endl;
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "Obwod prostokata o wymiarach 'a' na 'b':" << endl;
    if (b == 0) {
        cout << endl;
        cout << "Z liczby 0 nie da się zrobić prostokąta!" << endl;
    }
    else {
        cout << endl;
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    cout << endl;
    cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu" << endl;
    cout << endl;
    for (int i = 1; i <= a; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;

    }
    cout << endl;
    cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:" << endl;
    cout << endl;
    for (int i = a; i > 0; --i) {
        for (int j = 0; j < a - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;

    }
    cout << endl;
    return 0;
}