#include <iostream>

using namespace std;
int main()
{
int a,b,c,m;
cout << "Podaj 3 liczby." << endl;
cin >>a>>b>> c;

m=a;
if (b>m) m=b;
if (c>m) m=c;
cout << "Największa liczba to: " << m;
}
