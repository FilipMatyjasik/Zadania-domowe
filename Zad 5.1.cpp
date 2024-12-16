#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Podaj liczbe elementow wektora: ";
    cin >> n;
    if (n <= 0) {
        cout << "Rozmiarem wektora musi byc liczba dodatnia!" << endl;
        return 1;
    }
    vector<int> wektor(n);
    cout << "Podaj " << n << " liczb calkowitych:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> wektor[i];
    }
    int maxElement = wektor[0];
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (wektor[i] > maxElement) {
            maxElement = wektor[i];
            maxIndex = i;
        }
    }
    cout << "Maksymalny element wektora: " << maxElement << endl;
    cout << "Indeks maksymalnego elementu: " << maxIndex << endl;
    return 0;
}
