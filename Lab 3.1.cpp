#include <iostream>
using namespace std;
int main()
{
    // wprowadzenie liczb x, y
    float x, y;
    cout << "Podaj wartosc liczby x: \n";
    cin >> x;
    cout << "Podaj wartosc liczby y: \n";
    cin >> y;
    cout << "wartosc liczby x: " << x << " wartosc liczby y: " << y << endl;
    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;
    float iloraz;
    if (y == 0) {
        cout << "Nie mozna dzielic przez 0!!!!";
    }
    else

        iloraz = x / y;

    cout << "Suma liczb x i y wynosi: " << suma << endl;
    cout << "Roznica liczb  x i y wynosi: " << roznica << endl;
    cout << "Iloczyn liczb x i y wynosi: " << iloczyn << endl;
    cout << "Iloraz liczb x i y wynosi: " << iloraz << endl;
    return 0;
}
