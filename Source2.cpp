#include <iostream>
using namespace std;
int main()
{
	char odp;
	do				//p�tla "do" do sprawdzenia czy powtarzamy zadanie, czy nie
	{
		char znak;
		int liczba_liter;
		cout << 'A';
		for (znak = 'B'; znak <= 'H'; znak = znak++)		//po dwie litery w 1. linijce
		{
			if ((znak - 1) % 2)
			{
				cout << "";			//dopisanie kolejnej litery
			}
			else
			{
				cout << "\t";		//tabulator do nast�pnej dw�jki
			}
			cout << znak;
		}

		cout << "\n";			//przej�cie do nast�pnej linijki

		cout << "Podaj liczbe, po ile liter w rzedzie mam wypisac dalej:\n";
		cin >> liczba_liter;

		if (isdigit(liczba_liter))
		{
			cout << "Prosze podaj LICZBE, nie inne wartosci:\n";
			cin >> liczba_liter;
		}

		else
		{
			for (znak = 'I'; znak <= 'Z'; znak = znak++)	//po "liczba_liter" liter w kolejnych linijkach
			{
				if ((znak - 'I') % liczba_liter)
				{
					cout << "";		//do��czenie litery
				}
				else
				{
					cout << "\n";	//przej�cie do nast�pnej linijki
				}
				cout << znak;
			}
		}

		cout << "\nCzy chcesz powtorzyc zadanie?	[t/n]\n";		//po drobnych zmianach teraz ju� tu si� chrzani...
		cin >> odp;

		if (odp != 'n', 't')
		{
			cout << "\nPodaj odpowiedz typu [t/n]:\n";
			cin >> odp;
		}						//odt�d zaczyna si� co� chrzani�...
								//chocia� nie wywala b��du, od tego miejsca do ko�ca ��czy ju� wszystko w jedn� grup�
		else
		{
			;
		}
	} while (odp == 'n');		//i jak to zako�czy�...
	
	return 0;						
	
}