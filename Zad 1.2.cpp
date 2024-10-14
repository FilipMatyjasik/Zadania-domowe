#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Podaj liczbę całkowitą: ";
    cin >> number;
    if (number > 0) {
        cout << "Wpisana liczba jest dodatnią liczbą całkowitą: " << number << endl;
    }
    else 
        if (number ==0) {
        cout << "Wpisana liczba to zero:" << number << endl;
    }
    else {
        cout << "Wpisana liczba jest ujemną liczbą całkowitą: " << number << endl;
    }
   
    cout << "Dziękuję.";
    return 0;
}