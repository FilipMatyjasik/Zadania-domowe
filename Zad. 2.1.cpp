#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Podaj ilosc liczb w ciagu: ";
	cin >> n;
	int suma = 0;
	for (int i = 1; i <= n; i++) {
		int suma_jednego = 0;
		for (int j = 1; j <= i; j++) {
			suma_jednego += j;
		}
		suma += suma_jednego;
	}

	cout << "Suma szeregu wynosi: " << suma << endl;
	return 0;
}