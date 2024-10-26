#include <iostream>
using namespace std;
int main()
{
	int mies;
	cout << "Podaj numer miesiaca: ";
	cin >> mies;
	if (mies < 1 && mies > 12) {
		cout << "Podany numer miesiaca jest nieprawidlowy.";
		return 1;
	}
	string nazwmies;
	int dni;
	switch (mies) {
	case 1:
			dni = 31;
			nazwmies = "Styczen.";
			break;
	case 2:
			dni = 28;
			nazwmies = "Luty.";
			break;
		case 3:
			dni = 31;
			nazwmies = "Marzec.";
			break;
		case 4:
			dni = 30;
			nazwmies = "Kwiecien.";
			break;
		case 5:
			dni = 31;
			nazwmies = "Marzec.";
			break;
		case 6:
			dni = 30;
			nazwmies = "Czerwiec.";
			break;
		case 7:
			dni = 31;
			nazwmies = "Lipiec.";
			break;
		case 8:
			dni = 31;
			nazwmies = "Sierpien.";
			break;
		case 9:
			dni = 30;
			nazwmies = "Wrzesien.";
			break;
		case 10:
			dni = 31;
			nazwmies = "Pazdziernik.";
			break;
		case 11:
			dni = 30;
			nazwmies = "Listopad.";
			break;
		case 12:
			dni = 31;
			nazwmies = "Grudzien.";
			break;
	default:
		dni = 0;
		cout << "Nie ma takiego miesiaca." << endl;
		break;
	}
	cout << "Miesiac: " << nazwmies << endl;
	cout << "Posiada " << dni << " dni." << endl;
	if (mies >= 4 && mies <= 9) {
		cout << "W tym miesiacu jest slonecznie." << endl;
	}
	else {
		cout << "W tym miesiacu jest pochmurnie" << endl;
	}
	return 0;
}