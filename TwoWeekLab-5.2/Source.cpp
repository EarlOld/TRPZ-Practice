#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct ITINERARY
{
	string FIRST;			//� ����� ����������� ������ ��������;
	string FINAL;			//� ����� �������� ������ ��������;
	unsigned int NUM;		//� ����� ��������.
	double DISTANCE;		//- ������� � ���������.
};

inline void Menu()
{
	cout << "Select action from menu:" << endl
		<< "\t MENU" << endl
		<< "1 - Adjustments record;" << endl
		<< "2 - Search for information on various fields;" << endl
		<< "3 - Adding items to the end of the database;" << endl
		<< "4 - Removing information from the database." << endl
		<< "0 - Exit" << endl;
}

/*	1 - ����������� �������� ������ �����	*/
/*	2 - ����� ���������� �� ������ ������	*/

/*	3 - ��������� ������ � ����� ���� �����	*/
void Add(ITINERARY& A)
{
	ofstream fout("database.txt", ios_base::app);
	cout << "Endter beginning of route: ";
	cin >> A.FIRST;
	fout << A.FIRST << endl;
	cout << "Enter the end of route: ";
	cin >> A.FINAL;
	fout << A.FINAL << endl;
	cout << "Enter number of route: ";
	cin >> A.NUM;
	fout << A.NUM << endl;
	cout << "Enter distance of route: ";
	cin >> A.DISTANCE;
	fout << A.DISTANCE << endl << endl;
	fout.close();
}

/*	4 - ��������� ���������� � ���� �����	*/

int main()
{
	ITINERARY bus;
	int ch;

	do {
		Menu();
		cout << endl << " >  ";
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			Add(bus);
			break;
		case 4:
			break;
		case 0:
			return NULL;
		default:
			cerr << "Incorrect input!" << endl;
			system("pause");
			break;
		}
		system("cls");
	} while (ch != 0);

	system("pause");
	return NULL;
}