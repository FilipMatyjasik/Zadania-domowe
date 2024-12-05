#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Podaj liczbę elementów w tablicy: ";
    cin >> n;
    vector<int> tablica(n);
    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }
    unordered_map<int, int> licznik;
    for (int i = 0; i < n; ++i) {
        licznik[tablica[i]]++;
    }
    int najczesciej_wystepujacy = tablica[0];
    int max_wystapienia = licznik[najczesciej_wystepujacy];
    for (const auto& para : licznik) {
        if (para.second > max_wystapienia) {
            najczesciej_wystepujacy = para.first;
            max_wystapienia = para.second;
        }
    }
    cout << "Najczęściej występujący element to: " << najczesciej_wystepujacy << endl;
    return 0;
}
