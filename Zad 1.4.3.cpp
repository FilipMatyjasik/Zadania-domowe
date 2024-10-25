#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	cout << "Podaj 3 liczby." << endl;
	cin >> a >> b >> c;
	int arr[] { a, b, c };
	int max = arr[0];
	int i;
	for (i = 1; i < 3; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
    cout << "Największa liczba to: " << max;
	return 0;
}