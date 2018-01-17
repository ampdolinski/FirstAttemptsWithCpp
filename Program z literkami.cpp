#include <iostream>
using namespace std;
int main()
{
	char odp;
	do				//pętla "do" do sprawdzenia czy powtarzamy zadanie, czy nie
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
				cout << "\t";		//tabulator do następnej dwójki
			}
			cout << znak;
		}

		cout << "\n";			//przejście do następnej linijki

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
					cout << "";		//dołączenie litery
				}
				else
				{
					cout << "\n";	//przejście do następnej linijki
				}
				cout << znak;
			}
		}

		cout << "\nCzy chcesz powtorzyc zadanie?	[t/n]\n";		//po drobnych zmianach teraz już tu się chrzani...
		cin >> odp;

		if (odp != 'n', 't')
		{
			cout << "\nPodaj odpowiedz typu [t/n]:\n";
			cin >> odp;
		}						//odtąd zaczyna się coś chrzanić...
								//chociaż nie wywala błędu, od tego miejsca do końca łączy już wszystko w jedną grupę
		else
		{
			;
		}
	} while (odp == 'n');		//i jak to zakończyć...
	
	return 0;						
	
}
