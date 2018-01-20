#include <iostream>
using namespace std;
//**************************************************************
double	poczatek_x,
		poczatek_y,
		skala_x = 1,
		skala_y = 1;

//**************************************************************
inline double wspx(double wspolrzedna)
{
	return ((wspolrzedna - poczatek_x) * skala_x);
}
//**************************************************************

//**************************************************************
inline double wspy(double wspolrzedna)
{
	return ((wspolrzedna - poczatek_y) * skala_y);
}
//**************************************************************

int main()
{
	double	x1 = 100,		//przykładowy punkt
			y1 = 100;
	
	cout << "Mamy punkt W o wspolrzednych:\n "
		<< "x = " << wspx(x1) << " oraz y = " << wspy(y1) << endl;

	//zmiana poczštku układu współrzędnych
	poczatek_x = 20;
	poczatek_y = -500;

	cout << "Po zmianie poczatku ukladu wspolrzednych tak,\n"
		<< "ze znajdzie sie on w punkcie (" << poczatek_x << ", "
		<< poczatek_y << "),"
		<< "\nnowe wspolrzedne punktu W beda nastepiujace:\n"
		<< "x = " << wspx(x1) << " oraz y = " << wspy(y1) << endl;

	//teraz zagęszczenie skali na osi pionowej
	skala_x = 0.5;
	cout << "Gdy dodatkowo zmienimy skale pozioma na wartosc: "
		<< skala_x << ",\nto otrzymamy jako koncowe wartosci wspolrzednych:\n"
		<< "x = " << wspx(x1) << " oraz y = " << wspy(y1) << endl;

	getchar();
	return 0;
	}
