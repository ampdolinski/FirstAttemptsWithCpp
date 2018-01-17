#include <iostream>
using namespace std;
int main()
{
	char odp;
	do				//pêtla "do" do sprawdzenia czy powtarzamy zadanie, czy nie
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
				cout << "\t";		//tabulator do nastêpnej dwójki
			}
			cout << znak;
		}

		cout << "\n";			//przejœcie do nastêpnej linijki

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
					cout << "";		//do³¹czenie litery
				}
				else
				{
					cout << "\n";	//przejœcie do nastêpnej linijki
				}
				cout << znak;
			}
		}

		cout << "\nCzy chcesz powtorzyc zadanie?	[t/n]\n";		//po drobnych zmianach teraz ju¿ tu siê chrzani...
		cin >> odp;

		if (odp != 'n', 't')
		{
			cout << "\nPodaj odpowiedz typu [t/n]:\n";
			cin >> odp;
		}						//odt¹d zaczyna siê coœ chrzaniæ...
								//chocia¿ nie wywala b³êdu, od tego miejsca do koñca ³¹czy ju¿ wszystko w jedn¹ grupê
		else
		{
			;
		}
	} while (odp == 'n');		//i jak to zakoñczyæ...
	
	return 0;						
	
}