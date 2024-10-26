#include <iostream>
using namespace std;
int main()
{
    const int slices_per_pizza = 8;
    int guests, pizzas;
    cout << "Podaj liczbê gosci: ";
    cin >> guests;
    cout << endl;
    cout << "Podaj liczbê placków pizzy: ";
    cin >> pizzas;
    cout << endl;
    int pieces = slices_per_pizza * pizzas;
    if ((pieces) < guests) {
        cout << "Za ma³o pizzy wzglêdem liczby goœci!";
    }
    else {
        int guest_pieces, host_pieces;
        guest_pieces = pieces / guests;
        host_pieces = pieces % guests;
        cout << "Ka¿dy otrzyma " << guest_pieces << " kawa³ków (kawa³ki), dla organizatora zostanie " << host_pieces << " kawa³ków (kawa³ki)";

    }

    return 0;
}