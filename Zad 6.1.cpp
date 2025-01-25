#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;
    int liczba = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            liczba++;
        }
    }
    cout << "Liczba liczb naturalnych nie wiekszych od " << n
        << ", ktore sa podzielne przez 5, ale nie podzielne przez 3, wynosi: "
        << liczba << endl;
    return 0;
}
