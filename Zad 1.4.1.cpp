#include <iostream>

using namespace std;
int main()
{
int a, b, c;
cout << "Podaj 3 liczby." << endl;
cin >> a >> b >>c;
if ((a >= b) && (a >= c))
cout << "Największa liczba to: " << a;
else if ((b >= a) && (b >= c))
cout << "Największa liczba to: " << b;
else if ((c >= b) && (c >= a))
cout << "Największa liczba to: " << c;
return 0;
}
