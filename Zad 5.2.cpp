#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    if (n <= 0) {
        cout << "Rozmiarem tablicy musi byc liczba dodatnia!" << endl;
        return 1;
    }
    vector<int> tablica(n);
    cout << "Podaj " << n << " liczb calkowitych:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> tablica[i];
    }
    vector<int> nieparzyste, parzyste;
    for (int i = 0; i < n; ++i) {
        if (tablica[i] % 2 == 0) {
            parzyste.push_back(tablica[i]);
        }
        else {
            nieparzyste.push_back(tablica[i]);
        }
    }
    sort(nieparzyste.begin(), nieparzyste.end());
    sort(parzyste.begin(), parzyste.end());
    cout << "Tablica wejsciowa:" << endl;
    int max_size = max(parzyste.size(), nieparzyste.size());
    for (int i = 0; i < max_size; ++i) {
        if (i < parzyste.size()) {
            cout << parzyste[i] << "\t";
        }
        else {
            cout << "\t";
        }
        if (i < nieparzyste.size()) {
            cout << nieparzyste[i] << endl;
        }
        else {
            cout << endl;
        }
    }
    cout << "Tablica wyjsciowa:" << endl;
    for (int i = 0; i < max_size; ++i) {
        if (i < nieparzyste.size()) {
            cout << nieparzyste[i] << "\t";
        }
        else {
            cout << "\t";
        }
        if (i < parzyste.size()) {
            cout << parzyste[i] << endl;
        }
        else {
            cout << endl;
        }
    }
    return 0;
}
