#include <iostream>
using namespace std;
int main()
{
    const int slices_per_pizza = 8;
    int guests, pizzas;
    cout << "Podaj liczb� gosci: ";
    cin >> guests;
    cout << endl;
    cout << "Podaj liczb� plack�w pizzy: ";
    cin >> pizzas;
    cout << endl;
    int pieces = slices_per_pizza * pizzas;
    if ((pieces) < guests) {
        cout << "Za ma�o pizzy wzgl�dem liczby go�ci!";
    }
    else {
        int guest_pieces, host_pieces;
        guest_pieces = pieces / guests;
        host_pieces = pieces % guests;
        cout << "Ka�dy otrzyma " << guest_pieces << " kawa�k�w (kawa�ki), dla organizatora zostanie " << host_pieces << " kawa�k�w (kawa�ki)";

    }

    return 0;
}