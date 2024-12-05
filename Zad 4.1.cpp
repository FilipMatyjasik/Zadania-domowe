#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Podaj liczbê elementów w tablicy: ";
    cin >> n;
    vector<int> tablica(n);
    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }
    int najwiekszy_element = *max_element(tablica.begin(), tablica.end());
    cout << "Najwiêkszy element w tablicy to: " << najwiekszy_element << endl;
    return 0;
}
