#include <iostream>
using namespace std;
//**************************************************************
//definicja nazwy i elementów funkcji wewnętrznej
void zerowanie(int wart, int &druga_wart)
{
	cout << "\tW funkcji zerowanie przed zerowaniem \n"
		<< "\twart = " << wart << ", a druga_wart = " << druga_wart << ".\n";

	wart = 0;
	druga_wart = 0;

	cout << "\tW funkcji zerowanie po zerowaniu \n"
		<< "\twart = " << wart << ", a druga_wart = " << druga_wart << ".\n";

}
//**************************************************************
int main()
{
	char znak; int a = 55, b = 63;
	
	do
	{

		cout << "Przed wywolaniem funkcji: zerowanie \n"
			<< "a = " << a << ", a b = " << b << ".\n";

		zerowanie(a, b);

		cout << "Po wywolaniu funkcji: zerowanie \n"
			<< "a = " << a << ", a b = " << b << ".\n";

		//a teraz pytanie o zamknięcie czy powtórzenie programu

		cout << "\nCzy chcesz zakonczyc prace programu? [t/n]?\n";
		cin >> znak;
		cout << "\n";

	}

	while (znak != 't');
	return 0;
}
			//PS Magiczne znaczki do robienia komentarzy wcinających się w kod:
			//	/*blablabla*/
