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
	double	x1, y1;
	cout << "Wprowadz wspolrzedna x punktu W:\n ";
	cin >> x1;
	cout << "Wprowadz wspolrzedna y punktu W:\n ";
	cin >> y1;
	
	cout << "Mamy punkt W o wspolrzednych:\n "
		<< "x = " << wspx(x1) << " oraz y = " << wspy(y1) << endl;

	//zmiana pocz¹tku uk³adu wspó³rzêdnych

	cout << "Wprowadz wspolrzedna x nowego ukladu wspolrzednych:\n ";
	cin >> poczatek_x;
	cout << "Wprowadz wspolrzedna y nowego ukladu wspolrzednych:\n ";
	cin >> poczatek_y;

		cout << "Po zmianie poczatku ukladu wspolrzednych tak,\n"
		<< "ze znajdzie sie on w punkcie (" << poczatek_x << ", "
		<< poczatek_y << "),"
		<< "\nnowe wspolrzedne punktu W beda nastepiujace:\n"
		<< "x = " << wspx(x1) << " oraz y = " << wspy(y1) << endl;

	//teraz pytanie o skale na osiach
	
		cout << "Wprowadz skale osi x koncowego ukladu wspolrzednych:\n ";
		cin >> skala_x;
		cout << "Wprowadz skale osi y koncowego ukladu wspolrzednych:\n ";
		cin >> skala_y;

	cout << "Gdy dodatkowo zmienimy skale pozioma na wartosc: "
		<< skala_x << ",\nto otrzymamy jako koncowe wartosci wspolrzednych:\n"
		<< "x = " << wspx(x1) << " oraz y = " << wspy(y1) << endl;

	getchar();		//zatrzymanie programu, ¿eby klikn¹æ ENTER - w tej wersji ³apie ostatniego ENTER-a...
	return 0;
	}