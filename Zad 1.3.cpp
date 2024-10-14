#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Wprowadź liczbę całkowitą" << endl;
	cin >> number;
	if (number % 2 == 0) {
		cout << "Wpisana liczba jest parzysta" << endl;
	}
	else {
		cout << "Wpisana liczba jest nieparzysta" << endl;
	}
	cout << "Dziękuję.";
	return 0;
}
